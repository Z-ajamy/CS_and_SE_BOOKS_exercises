let books = [];
let cart = [];
let currentFilter = 'all';
let currentPage = 1;
const booksPerPage = 50;


$(document).ready(function () {
    fetch('books.json')
        .then(response => {
            if (!response.ok) {
                throw new Error("HTTP error " + response.status);
            }
            return response.json();
        })
        .then(data => {
            books = data;
            applyFilters();
        })
        .catch(err => {
            console.error("Could not load books.json. Make sure you are using a local server.", err);
            $('.container').append('<p style="color:red; text-align:center;">Error loading books. Please ensure you are running this on a local server (localhost) to allow fetching JSON files.</p>');
        });

    
    $('#searchInput').on('input', function () {
        currentPage = 1;
        applyFilters();
    });

    $('#bookModal').click(function (e) {
        if (e.target.id === 'bookModal') {
            closeModal();
        }
    });

    $(document).keydown(function (e) {
        if (e.key === 'Escape') {
            closeModal();
        }
    });
});

function displayBooks(booksToShow) {
    const container = $('#shelvesContainer');
    container.empty();

    if (booksToShow.length === 0) {
        container.html('<div class="no-books"> No books found 😔</div>');
        return;
    }

    const categories = {};
    booksToShow.forEach(book => {
        if (!categories[book.category]) {
            categories[book.category] = [];
        }
        categories[book.category].push(book);
    });

    Object.keys(categories).forEach(category => {
        const shelf = $('<div class="shelf-container"></div>');
        shelf.append(`<div class="shelf"><div class="shelf-title">${category}</div><div class="books-row" id="category-${category.replace(/\s+/g, '-')}"></div></div>`);
        container.append(shelf);

        categories[category].forEach(book => {
            const bookEl = createBookElement(book);
            $(`#category-${category.replace(/\s+/g, '-')}`).append(bookEl);
        });
    });

    updatePagination(booksToShow.length);
}

function createBookElement(book) {
    const stars = '⭐'.repeat(book.rating);
   
    return `
        <div class="book" data-id="${book.id}" 
             onmouseenter="showTooltip(event, ${book.id})" 
             onmouseleave="hideTooltip()"
             onclick="showBookDetails(${book.id})">
            
            <a href="${book.link}" target="_blank" class="book-link-wrapper" onclick="event.stopPropagation()">
                <div class="book-cover"><img src="${book.cover}" alt="${book.title}"></div>
            </a>

            <div class="book-info">
                <div class="book-title">${book.title}</div>
                <div class="book-author">${book.author}</div>
                <div class="rating">${stars}</div>
                <div class="book-price">$${book.price}</div>
                <button class="delete-btn" onclick="event.stopPropagation(); deleteBook(${book.id})">Delete 🗑️</button>
            </div>
        </div>
    `;
}
function showTooltip(event, bookId) {
    const book = books.find(b => b.id === bookId);
    const tooltip = $('#tooltip');
    tooltip.html(`
        <strong>${book.title}</strong><br>
        <em>By: ${book.author}</em><br><br>
        ${book.description.substring(0, 100)}...
    `);
    tooltip.css({
        display: 'block',
        left: event.pageX ,
        top: event.pageY  
    });
}

function hideTooltip() {
    $('#tooltip').fadeOut(200);
}

function showBookDetails(bookId) {
    const book = books.find(b => b.id === bookId);
    const stars = '⭐'.repeat(book.rating);

    const reviewsHtml = book.reviews.map(review => `
        <div class="review-item">
            <strong>${review.name}</strong> - ${review.rating}/5<br>
            ${review.comment}
        </div>
    `).join('');

    $('#modalContent').html(`
        <div class="modal-book-details">
            <div class="modal-book-cover"><img src="${book.cover}" alt="${book.title}"></div>
            <div class="modal-book-info">
                <h2>${book.title}</h2>
                <p><strong>Author:</strong> ${book.author}</p>
                <p><strong>Category:</strong> ${book.category}</p>
                <p><strong>Rating:</strong> ${stars}</p>
                <p><strong>Price:</strong> $${book.price}</p>
                
                <a href="${book.link}" target="_blank" class="read-btn">Read Book Now 📖</a>
                
                <p style="margin-top:15px"><strong>Description:</strong><br>${book.description}</p>
                
                <button class="add-to-cart-btn" onclick="addToCart(${book.id})">
                     Buy 🛒
                </button>
                
                <div class="review-section">
                    <h3 style="color: #ffffffff;"> Reviews 📝</h3>
                    <div class="reviews-list">${reviewsHtml || '<p style="color: #999;">No reviews yet</p>'}</div>
                    
                    <h4 style="margin-top: 20px; color:white;">Add Your Review</h4>
                    <div class="review-form">
                        <input type="text" id="reviewName" placeholder="Your Name">
                        <select id="reviewRating">
                            <option value="5">⭐⭐⭐⭐⭐ (5)</option>
                            <option value="4">⭐⭐⭐⭐ (4)</option>
                            <option value="3">⭐⭐⭐ (3)</option>
                            <option value="2">⭐⭐ (2)</option>
                            <option value="1">⭐ (1)</option>
                        </select>
                        <textarea id="reviewComment" placeholder="Your Comment"></textarea>
                        <button class="submit-review-btn" onclick="submitReview(${book.id})">
                            Submit Review
                        </button>
                    </div>
                </div>
            </div>
        </div>
    `);
    $('#bookModal').css('display', 'flex');
}

function closeModal() {
    $('#bookModal').fadeOut(300);
}

function submitReview(bookId) {
    const name = $('#reviewName').val();
    const rating = parseInt($('#reviewRating').val());
    const comment = $('#reviewComment').val();

    if (!name || !comment) {
        alert('Please fill in all fields');
        return;
    }

    const book = books.find(b => b.id === bookId);
    book.reviews.push({ name, rating, comment });

    
    const avgRating = Math.round(book.reviews.reduce((sum, r) => sum + r.rating, book.rating) / (book.reviews.length + 1));
    book.rating = avgRating;

    alert(' Review added successfully! ✅');
    showBookDetails(bookId);
}

function addToCart(bookId) {
    const book = books.find(b => b.id === bookId);
    cart.push(book);
    updateCartCount();

    const btn = event.target;
    const originalText = btn.textContent;
    btn.textContent = 'Added! ✅ ';
    btn.style.background = '#28a745';

    setTimeout(() => {
        btn.textContent = originalText;
        btn.style.background = '#3b2600';
    }, 2000);
}

function updateCartCount() {
    $('.cart-count').text(cart.length);
}

function showCart() {
    if (cart.length === 0) {
        alert(' Cart is empty 🛒');
        return;
    }

    let total = cart.reduce((sum, book) => sum + book.price, 0);
    let cartHtml = '<h2 style="color: #ffffffff; margin-bottom: 20px;"> Shopping Cart 🛒</h2>';

    cart.forEach((book, index) => {
        cartHtml += `
            <div style="display: flex; justify-content: space-between; align-items: center; padding: 15px; background: #b9a067; border-radius: 10px; margin-bottom: 10px;">
                <div>
                    <strong>${book.title}</strong><br>
                    <small>${book.author}</small>
                </div>
                <div style="text-align: right;">
                    <strong style="color: #33290cff;">$${book.price}</strong><br>
                    <button onclick="removeFromCart(${index})" style="background: #dc3545; color: white; border: none; padding: 5px 10px; border-radius: 5px; cursor: pointer; margin-top: 5px;">Remove</button>
                </div>
            </div>
        `;
    });

    cartHtml += `
        <div style="margin-top: 20px; padding-top: 20px; border-top: 2px solid #e0e0e0;">
            <h3 style="color: #ffffffff;">Total: $${total}</h3>
            <button class="add-to-cart-btn" onclick="checkout()" style="margin-top: 15px;">
                Checkout 💳 
            </button>
        </div>
    `;

    $('#modalContent').html(cartHtml);
    $('#bookModal').css('display', 'flex');
}

function removeFromCart(index) {
    cart.splice(index, 1);
    updateCartCount();
    showCart();
}

function checkout() {
    alert(' Thank you for your purchase! Delivery in 3-5 days. 🎉');
    cart = [];
    updateCartCount();
    closeModal();
}

function filterBooks(category) {
    currentFilter = category;
    currentPage = 1;

    $('.filter-btn').removeClass('active');
    event.target.classList.add('active');

    applyFilters();
}

function applyFilters() {
    let filtered = books;

    if (currentFilter !== 'all') {
        filtered = books.filter(b => b.category === currentFilter);
    }

    const searchTerm = $('#searchInput').val().toLowerCase();
    if (searchTerm) {
        filtered = filtered.filter(b =>
            b.title.toLowerCase().includes(searchTerm) ||
            b.author.toLowerCase().includes(searchTerm) ||
            b.category.toLowerCase().includes(searchTerm)
        );
    }

    const start = (currentPage - 1) * booksPerPage;
    const end = start + booksPerPage;
    const paginated = filtered.slice(start, end);

    displayBooks(paginated);
}

function updatePagination(totalBooks) {
    const totalPages = Math.ceil(totalBooks / booksPerPage);
    const pagination = $('#pagination');
    pagination.empty();

    if (totalPages <= 1) return;

    for (let i = 1; i <= totalPages; i++) {
        const btn = $(`<button class="page-btn ${i === currentPage ? 'active' : ''}">${i}</button>`);
        btn.click(function () {
            currentPage = i;
            applyFilters();
        });
        pagination.append(btn);
    }
}

function addNewBook() {
    const title = $('#adminTitle').val();
    const author = $('#adminAuthor').val();
    const price = parseFloat($('#adminPrice').val());
    const category = $('#adminCategory').val();
    const link = $('#adminLink').val(); 
    const cover = $('#adminCover').val();
    const description = $('#adminDescription').val();


    if (!title || !author || !price || !category || !description || !link) {
        alert(' Please fill in all required fields (including Book Link) ⚠️');
        return;
    }

    const newId = books.length > 0 ? Math.max(...books.map(b => b.id)) + 1 : 1;

    const newBook = {
        id: newId,
        title,
        author,
        price,
        category,
        description,
        cover,
        link, 
        rating: 5,
        reviews: []
    };

    books.push(newBook);


    $('#adminTitle, #adminAuthor, #adminPrice, #adminCover, #adminDescription, #adminLink').val('');
    $('#adminCategory').val('');

    alert(' Book added successfully! ✅');
    applyFilters();
}

function deleteBook(bookId) {
    if (confirm('Are you sure you want to delete this book?')) {
        const index = books.findIndex(b => b.id === bookId);
        if (index > -1) {
            books.splice(index, 1);
            alert('Book deleted ✅');
            applyFilters();
        }
    }
}