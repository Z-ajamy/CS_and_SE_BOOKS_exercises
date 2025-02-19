# Chapter 7: Pointers in C - *C How to Program*

## Table of Contents

- [7.1 Introduction](#71-introduction)
- [7.2 Pointer Variable Definitions and Initialization](#72-pointer-variable-definitions-and-initialization)
- [7.3 Pointer Operators](#73-pointer-operators)
- [7.4 Passing Arguments to Functions by Reference](#74-passing-arguments-to-functions-by-reference)
- [7.5 Using the const Qualifier with Pointers](#75-using-the-const-qualifier-with-pointers)
  - [7.5.1 Converting a String to Uppercase](#751-converting-a-string-to-uppercase)
  - [7.5.2 Printing a String One Character at a Time](#752-printing-a-string-one-character-at-a-time)
  - [7.5.3 Attempting to Modify a Constant Pointer to Non-Constant Data](#753-attempting-to-modify-a-constant-pointer-to-non-constant-data)
  - [7.5.4 Attempting to Modify a Constant Pointer to Constant Data](#754-attempting-to-modify-a-constant-pointer-to-constant-data)
- [7.6 Bubble Sort Using Pass-By-Reference](#76-bubble-sort-using-pass-by-reference)
- [7.7 sizeof Operator](#77-sizeof-operator)
- [7.8 Pointer Expressions and Pointer Arithmetic](#78-pointer-expressions-and-pointer-arithmetic)
  - [7.8.1 Pointer Arithmetic Operators](#781-pointer-arithmetic-operators)
  - [7.8.2 Aiming a Pointer at an Array](#782-aiming-a-pointer-at-an-array)
  - [7.8.3 Adding an Integer to a Pointer](#783-adding-an-integer-to-a-pointer)
  - [7.8.4 Subtracting an Integer from a Pointer](#784-subtracting-an-integer-from-a-pointer)
  - [7.8.5 Incrementing and Decrementing a Pointer](#785-incrementing-and-decrementing-a-pointer)
  - [7.8.6 Subtracting One Pointer from Another](#786-subtracting-one-pointer-from-another)
  - [7.8.7 Assigning Pointers to One Another](#787-assigning-pointers-to-one-another)
  - [7.8.8 Pointer to void](#788-pointer-to-void)
  - [7.8.9 Comparing Pointers](#789-comparing-pointers)
- [7.9 Relationship between Pointers and Arrays](#79-relationship-between-pointers-and-arrays)
  - [7.9.1 Pointer/Offset Notation](#791-pointeroffset-notation)
  - [7.9.2 Pointer/Subscript Notation](#792-pointersubscript-notation)
  - [7.9.3 Cannot Modify an Array Name with Pointer Arithmetic](#793-cannot-modify-an-array-name-with-pointer-arithmetic)
  - [7.9.4 Demonstrating Pointer Subscripting and Offsets](#794-demonstrating-pointer-subscripting-and-offsets)
  - [7.9.5 String Copying with Arrays and Pointers](#795-string-copying-with-arrays-and-pointers)
- [7.10 Arrays of Pointers](#710-arrays-of-pointers)
- [7.11 Random-Number Simulation Case Study: Card Shuffling and Dealing](#711-random-number-simulation-case-study-card-shuffling-and-dealing)
- [7.12 Function Pointers](#712-function-pointers)
  - [7.12.1 Sorting in Ascending or Descending Order](#7121-sorting-in-ascending-or-descending-order)
  - [7.12.2 Using Function Pointers to Create a Menu-Driven System](#7122-using-function-pointers-to-create-a-menu-driven-system)
- [7.13 Secure C Programming](#713-secure-c-programming)

---

## 7.1 Introduction

This chapter explores **pointers**, a powerful feature in C that enables dynamic memory allocation, function pointers, and array manipulation.

## 7.2 Pointer Variable Definitions and Initialization

A pointer is a variable that stores the memory address of another variable:
```c
int x = 10;
int *ptr = &x;
```

## 7.3 Pointer Operators

C provides several pointer operators such as `*` (dereference) and `&` (address-of).

## 7.4 Passing Arguments to Functions by Reference

Passing variables by reference allows modifying them inside a function.

## 7.5 Using the const Qualifier with Pointers

### 7.5.1 Converting a String to Uppercase

### 7.5.2 Printing a String One Character at a Time

### 7.5.3 Attempting to Modify a Constant Pointer to Non-Constant Data

### 7.5.4 Attempting to Modify a Constant Pointer to Constant Data

## 7.6 Bubble Sort Using Pass-By-Reference

Bubble sort implementation using pointers.

## 7.7 sizeof Operator

Determining memory size of variables and data structures.

## 7.8 Pointer Expressions and Pointer Arithmetic

### 7.8.1 Pointer Arithmetic Operators

### 7.8.2 Aiming a Pointer at an Array

### 7.8.3 Adding an Integer to a Pointer

### 7.8.4 Subtracting an Integer from a Pointer

### 7.8.5 Incrementing and Decrementing a Pointer

### 7.8.6 Subtracting One Pointer from Another

### 7.8.7 Assigning Pointers to One Another

### 7.8.8 Pointer to void

### 7.8.9 Comparing Pointers

## 7.9 Relationship between Pointers and Arrays

### 7.9.1 Pointer/Offset Notation

### 7.9.2 Pointer/Subscript Notation

### 7.9.3 Cannot Modify an Array Name with Pointer Arithmetic

### 7.9.4 Demonstrating Pointer Subscripting and Offsets

### 7.9.5 String Copying with Arrays and Pointers

## 7.10 Arrays of Pointers

Arrays storing pointers to other variables.

## 7.11 Random-Number Simulation Case Study: Card Shuffling and Dealing

Using pointers in a card game simulation.

## 7.12 Function Pointers

### 7.12.1 Sorting in Ascending or Descending Order

### 7.12.2 Using Function Pointers to Create a Menu-Driven System

## 7.13 Secure C Programming

Best practices for writing secure C programs with pointers.

---

This chapter covers **pointers**, their operations, and their applications in C programming.
