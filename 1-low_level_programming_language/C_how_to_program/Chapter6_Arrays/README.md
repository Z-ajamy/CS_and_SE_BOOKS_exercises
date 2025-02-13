# Chapter 6: Arrays in C - *C How to Program*

## Table of Contents

- [6.1 Introduction](#61-introduction)
- [6.2 Arrays](#62-arrays)
- [6.3 Defining Arrays](#63-defining-arrays)
- [6.4 Array Examples](#64-array-examples)
  - [6.4.1 Defining an Array and Using a Loop to Set Values](#641-defining-an-array-and-using-a-loop-to-set-values)
  - [6.4.2 Initializing an Array with an Initializer List](#642-initializing-an-array-with-an-initializer-list)
  - [6.4.3 Using Symbolic Constants and Calculations](#643-using-symbolic-constants-and-calculations)
  - [6.4.4 Summing the Elements of an Array](#644-summing-the-elements-of-an-array)
  - [6.4.5 Using Arrays to Summarize Survey Results](#645-using-arrays-to-summarize-survey-results)
  - [6.4.6 Graphing Array Element Values with Bar Charts](#646-graphing-array-element-values-with-bar-charts)
  - [6.4.7 Rolling a Die 60,000,000 Times](#647-rolling-a-die-60000000-times)
- [6.5 Using Character Arrays to Store and Manipulate Strings](#65-using-character-arrays-to-store-and-manipulate-strings)
  - [6.5.1 Initializing a Character Array with a String](#651-initializing-a-character-array-with-a-string)
  - [6.5.2 Initializing a Character Array with an Initializer List](#652-initializing-a-character-array-with-an-initializer-list)
  - [6.5.3 Accessing Characters in a String](#653-accessing-characters-in-a-string)
  - [6.5.4 Inputting into a Character Array](#654-inputting-into-a-character-array)
  - [6.5.5 Outputting a Character Array](#655-outputting-a-character-array)
  - [6.5.6 Demonstrating Character Arrays](#656-demonstrating-character-arrays)
- [6.6 Static Local Arrays and Automatic Local Arrays](#66-static-local-arrays-and-automatic-local-arrays)
- [6.7 Passing Arrays to Functions](#67-passing-arrays-to-functions)
- [6.8 Sorting Arrays](#68-sorting-arrays)
- [6.9 Data Science Case Study: Survey Data Analysis](#69-data-science-case-study-survey-data-analysis)
- [6.10 Searching Arrays](#610-searching-arrays)
  - [6.10.1 Linear Search](#6101-linear-search)
  - [6.10.2 Binary Search](#6102-binary-search)
- [6.11 Multidimensional Arrays](#611-multidimensional-arrays)
  - [6.11.1 Two-Dimensional Array Example](#6111-two-dimensional-array-example)
  - [6.11.2 Initializing a Double-Subscripted Array](#6112-initializing-a-double-subscripted-array)
  - [6.11.3 Setting Elements in One Row](#6113-setting-elements-in-one-row)
  - [6.11.4 Totaling Elements in a Two-Dimensional Array](#6114-totaling-elements-in-a-two-dimensional-array)
  - [6.11.5 Two-Dimensional Array Manipulations](#6115-two-dimensional-array-manipulations)
- [6.12 Variable-Length Arrays](#612-variable-length-arrays)
- [6.13 Secure C Programming](#613-secure-c-programming)

---

## 6.1 Introduction

This chapter introduces **arrays**—a fundamental data structure in C. Arrays allow storing multiple values under a single variable name and enable efficient manipulation of data.

## 6.2 Arrays

An **array** is a collection of elements of the same type stored in contiguous memory locations. Arrays provide efficient indexing for data retrieval and manipulation.

## 6.3 Defining Arrays

To define an array in C:
```c
int numbers[5];
```
This declares an integer array `numbers` with 5 elements.

## 6.4 Array Examples

### 6.4.1 Defining an Array and Using a Loop to Set Values
Using loops to initialize an array simplifies the process:
```c
int arr[5];
for(int i = 0; i < 5; i++) {
    arr[i] = i * 2;
}
```

### 6.4.2 Initializing an Array with an Initializer List
```c
int numbers[] = {1, 2, 3, 4, 5};
```
The compiler determines the size based on the number of elements.

### 6.4.3 Using Symbolic Constants and Calculations
Using `#define` or `const` ensures scalability:
```c
#define SIZE 10
int arr[SIZE];
```

### 6.4.4 Summing the Elements of an Array
Iterating over an array to compute the sum:
```c
int sum = 0;
for (int i = 0; i < SIZE; i++) {
    sum += arr[i];
}
```

### 6.4.5 Using Arrays to Summarize Survey Results
Using arrays to analyze survey data efficiently.

### 6.4.6 Graphing Array Element Values with Bar Charts
Representing values graphically using an array.

### 6.4.7 Rolling a Die 60,000,000 Times
Simulating dice rolls and analyzing results with arrays.

## 6.5 Using Character Arrays to Store and Manipulate Strings

### 6.5.1 Initializing a Character Array with a String
```c
char word[] = "Hello";
```

### 6.5.2 Initializing a Character Array with an Initializer List
```c
char letters[] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

### 6.5.3 Accessing Characters in a String
Characters in a string can be accessed using indexes.

### 6.5.4 Inputting into a Character Array
Using `scanf` with `%s` for input.

### 6.5.5 Outputting a Character Array
Using `printf("%s", array)` to print strings.

### 6.5.6 Demonstrating Character Arrays
Character arrays provide flexibility in text manipulation.

## 6.6 Static Local Arrays and Automatic Local Arrays
Static arrays retain values between function calls.

## 6.7 Passing Arrays to Functions
Arrays are passed by reference in C.

## 6.8 Sorting Arrays
Sorting algorithms, such as **selection sort** and **bubble sort**, are implemented using arrays.

## 6.9 Data Science Case Study: Survey Data Analysis
Analyzing survey responses using arrays in a real-world example.

## 6.10 Searching Arrays

### 6.10.1 Linear Search
A simple sequential search.

### 6.10.2 Binary Search
A faster search for sorted arrays.

## 6.11 Multidimensional Arrays

### 6.11.1 Two-Dimensional Array Example
A matrix representation.

### 6.11.2 Initializing a Double-Subscripted Array
```c
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

### 6.11.3 Setting Elements in One Row
Modifying elements of a row.

### 6.11.4 Totaling Elements in a Two-Dimensional Array
Summing all matrix elements.

### 6.11.5 Two-Dimensional Array Manipulations
Working with multi-indexed data.

## 6.12 Variable-Length Arrays
Dynamic array sizes based on user input.

## 6.13 Secure C Programming
Ensuring safe array usage to prevent **buffer overflows**.

---

This chapter provides an in-depth understanding of arrays, their operations, and applications in C programming.
