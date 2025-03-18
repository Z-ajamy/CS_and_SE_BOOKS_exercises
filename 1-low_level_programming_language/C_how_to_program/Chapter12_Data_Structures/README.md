# Chapter 12: Data Structures

## 12.1 Introduction
This chapter introduces dynamic data structures that can grow and shrink at execution time, unlike fixed-size structures such as arrays and structs. The key data structures covered include:

- **Linked Lists**: Collections of data items arranged in a row, allowing insertion and deletion anywhere in the list.
- **Stacks**: A Last-In-First-Out (LIFO) structure used in compilers and operating systems.
- **Queues**: A First-In-First-Out (FIFO) structure representing waiting lines.
- **Binary Trees**: Used for efficient searching, sorting, and expression compilation.

Additionally, an **Optional Project: Building Your Own Compiler** is introduced, guiding students to create a compiler that translates a high-level language into Simpletron Machine Language (SML).

---

## 12.2 Self-Referential Structures
- Explanation of structures that include pointers to instances of the same structure type.

## 12.3 Dynamic Memory Management
- Covers memory allocation and deallocation functions such as `malloc`, `calloc`, `realloc`, and `free`.

## 12.4 Linked Lists
- **Function `insert`**: Adds a new node to the linked list.
- **Function `delete`**: Removes a node from the linked list.
- **Functions `isEmpty` and `printList`**: Checks if a list is empty and prints the elements of the list.

## 12.5 Stacks
- **Function `push`**: Adds an element to the stack.
- **Function `pop`**: Removes an element from the stack.
- **Applications of Stacks**: Used in function calls, expression evaluation, and parsing.

## 12.6 Queues
- **Function `enqueue`**: Inserts an element at the back (tail) of the queue.
- **Function `dequeue`**: Removes an element from the front (head) of the queue.

## 12.7 Trees
- **Function `insertNode`**: Adds a node to a binary tree.
- **Tree Traversals**:
  - **`inOrder`**: Left-Root-Right traversal.
  - **`preOrder`**: Root-Left-Right traversal.
  - **`postOrder`**: Left-Right-Root traversal.
- **Duplicate Elimination**: Prevents insertion of duplicate values in a binary search tree.
- **Binary Tree Search**: Efficient searching of values in a binary tree.
- **Other Binary Tree Operations**: Various tree manipulations and optimizations.

## 12.8 Secure C Programming
- Best practices for memory safety and secure handling of data structures.

---

### Summary & Exercises
- Recap of concepts covered in the chapter.
- Self-review exercises to reinforce learning.
- Answers to exercises provided.

### Special Section: Building Your Own Compiler
- A comprehensive project that guides students through the creation of a compiler that translates statements into **Simpletron Machine Language (SML)**.

---

This chapter provides essential knowledge on dynamic data structures, enabling efficient data organization and manipulation in C programming.
