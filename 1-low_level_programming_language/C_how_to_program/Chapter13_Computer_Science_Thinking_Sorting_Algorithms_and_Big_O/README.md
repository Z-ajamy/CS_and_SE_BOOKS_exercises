# Chapter 13: Computer-Science Thinking – Sorting Algorithms and Big O

## 📖 Overview  
This chapter introduces key sorting algorithms and the concept of **Big O notation**, which helps estimate an algorithm's efficiency. The sorting algorithms discussed include:  
- **Selection Sort**  
- **Insertion Sort**  
- **Merge Sort (Recursive)**  
- **Quicksort (Exercise)**  
- **Recursive Selection Sort (Exercise)**  
- **Bucket Sort (Exercise)**  

Understanding sorting is crucial because although different sorting algorithms produce the same result, they vary significantly in **runtime efficiency and memory usage**.

---

## 🏆 Learning Objectives  
By the end of this chapter, you will be able to:  
✅ Understand how sorting algorithms work and when to use them.  
✅ Analyze an algorithm’s **efficiency** using **Big O notation**.  
✅ Implement and compare the **selection sort, insertion sort, and merge sort**.  
✅ Recognize the trade-offs between **ease of implementation** and **performance**.  

---

## 🔹 Big O Notation: Algorithm Efficiency  
Big O notation helps measure how an algorithm performs **as the input size grows**. This chapter covers:  
- **O(1) Algorithms** → Constant time  
- **O(n) Algorithms** → Linear time  
- **O(n²) Algorithms** → Quadratic time  

Sorting algorithms have different efficiency levels:  
| Sorting Algorithm  | Best Case | Average Case | Worst Case |
|-------------------|----------|-------------|------------|
| Selection Sort   | O(n²)    | O(n²)       | O(n²)      |
| Insertion Sort   | O(n)     | O(n²)       | O(n²)      |
| Merge Sort      | O(n log n)| O(n log n)   | O(n log n) |

---

## 🚀 Sorting Algorithms Covered  
### 🔹 Selection Sort  
- **Concept:** Repeatedly selects the smallest element and swaps it with the current position.  
- **Efficiency:** O(n²)  
- **Implementation:** Simple but inefficient for large data sets.  

### 🔹 Insertion Sort  
- **Concept:** Builds the sorted array by inserting elements into their correct position.  
- **Efficiency:** O(n²) (but O(n) for nearly sorted data).  
- **Use case:** Suitable for small or nearly sorted data sets.  

### 🔹 Merge Sort  
- **Concept:** Uses **divide-and-conquer** to break the array into smaller pieces, sorts them recursively, and merges them.  
- **Efficiency:** O(n log n) (better than selection and insertion sort).  
- **Trade-off:** **More efficient** but requires additional memory.  

---

## 🔍 Self-Check Questions  
### ✅ Fill-in-the-Blank  
1️⃣ Sorting places data in ascending or descending order based on one or more **______**.  
   **Answer:** `keys`  

### ✅ Multiple Choice  
**Which of the following statements is false?**  
a) Big O notation estimates an algorithm’s **best-case** run time.  
b) The sorted array will be the same no matter which sorting algorithm is used.  
c) The sorting algorithm choice affects **runtime and memory use**.  
d) Selection sort and insertion sort are easy to program but inefficient; merge sort is more efficient but harder to program.  

**Answer:** `a` (Big O estimates the **worst-case** run time).  

---

## 📌 Summary  
- Sorting algorithms differ in **efficiency** and **ease of implementation**.  
- **Big O notation** helps analyze algorithm performance.  
- **Selection sort and insertion sort** are simple but inefficient.  
- **Merge sort** is more efficient but requires **recursion and extra memory**.  

---

## ✨ Additional Exercises  
- Implement **quicksort** using recursion.  
- Modify **selection sort** to use recursion.  
- Study **bucket sort**, which trades **memory for speed**.  

---

## 📚 References  
- "C How to Program" by Deitel & Deitel  
- "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein  
- Official documentation on sorting algorithms  

---

🚀 **Happy Coding!** 🎯  
