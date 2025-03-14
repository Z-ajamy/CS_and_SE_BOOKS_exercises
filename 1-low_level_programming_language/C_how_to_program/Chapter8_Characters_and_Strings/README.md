# Chapter 8: Characters and Strings

## Table of Contents
- [8.1 Introduction](#81-introduction)
- [8.2 Fundamentals of Strings and Characters](#82-fundamentals-of-strings-and-characters)
- [8.3 Character-Handling Library](#83-character-handling-library)
  - [8.3.1 Functions isdigit, isalpha, isalnum, and isxdigit](#831-functions-isdigit-isalpha-isalnum-and-isxdigit)
  - [8.3.2 Functions islower, isupper, tolower, and toupper](#832-functions-islower-isupper-tolower-and-toupper)
  - [8.3.3 Functions isspace, iscntrl, ispunct, isprint, and isgraph](#833-functions-isspace-iscntrl-ispunct-isprint-and-isgraph)
- [8.4 String-Conversion Functions](#84-string-conversion-functions)
  - [8.4.1 Function strtod](#841-function-strtod)
  - [8.4.2 Function strtol](#842-function-strtol)
  - [8.4.3 Function strtoul](#843-function-strtoul)
- [8.5 Standard Input/Output Library Functions](#85-standard-inputoutput-library-functions)
  - [8.5.1 Functions fgets and putchar](#851-functions-fgets-and-putchar)
  - [8.5.2 Function getchar](#852-function-getchar)
  - [8.5.3 Function sprintf](#853-function-sprintf)
  - [8.5.4 Function sscanf](#854-function-sscanf)
- [8.6 String-Manipulation Functions of the String-Handling Library](#86-string-manipulation-functions-of-the-string-handling-library)
  - [8.6.1 Functions strcpy and strncpy](#861-functions-strcpy-and-strncpy)
  - [8.6.2 Functions strcat and strncat](#862-functions-strcat-and-strncat)
- [8.7 Comparison Functions of the String-Handling Library](#87-comparison-functions-of-the-string-handling-library)
- [8.8 Search Functions of the String-Handling Library](#88-search-functions-of-the-string-handling-library)
  - [8.8.1 Function strchr](#881-function-strchr)
  - [8.8.2 Function strcspn](#882-function-strcspn)
  - [8.8.3 Function strpbrk](#883-function-strpbrk)
  - [8.8.4 Function strrchr](#884-function-strrchr)
  - [8.8.5 Function strspn](#885-function-strspn)
  - [8.8.6 Function strstr](#886-function-strstr)
  - [8.8.7 Function strtok](#887-function-strtok)
- [8.9 Memory Functions of the String-Handling Library](#89-memory-functions-of-the-string-handling-library)
  - [8.9.1 Function memcpy](#891-function-memcpy)
  - [8.9.2 Function memmove](#892-function-memmove)
  - [8.9.3 Function memcmp](#893-function-memcmp)
  - [8.9.4 Function memchr](#894-function-memchr)
  - [8.9.5 Function memset](#895-function-memset)
- [8.10 Other Functions of the String-Handling Library](#810-other-functions-of-the-string-handling-library)
  - [8.10.1 Function strerror](#8101-function-strerror)
  - [8.10.2 Function strlen](#8102-function-strlen)
- [8.11 Secure C Programming](#811-secure-c-programming)

---

## 8.1 Introduction
This chapter focuses on characters and strings in C programming. It covers fundamental concepts, standard library functions, and secure programming practices related to character and string handling.

## 8.2 Fundamentals of Strings and Characters
This section introduces the basics of characters and strings in C, including character arrays, string literals, and the null-terminator (`\0`).

## 8.3 Character-Handling Library
C provides several functions in the `<ctype.h>` library to classify and manipulate characters.

### 8.3.1 Functions isdigit, isalpha, isalnum, and isxdigit
- `isdigit(c)`: Checks if `c` is a digit (0-9).
- `isalpha(c)`: Checks if `c` is an alphabetic letter.
- `isalnum(c)`: Checks if `c` is a letter or digit.
- `isxdigit(c)`: Checks if `c` is a valid hexadecimal digit.

### 8.3.2 Functions islower, isupper, tolower, and toupper
- `islower(c)`: Checks if `c` is a lowercase letter.
- `isupper(c)`: Checks if `c` is an uppercase letter.
- `tolower(c)`: Converts uppercase to lowercase.
- `toupper(c)`: Converts lowercase to uppercase.

### 8.3.3 Functions isspace, iscntrl, ispunct, isprint, and isgraph
- `isspace(c)`: Checks if `c` is a whitespace character.
- `iscntrl(c)`: Checks if `c` is a control character.
- `ispunct(c)`: Checks if `c` is a punctuation character.
- `isprint(c)`: Checks if `c` is a printable character.
- `isgraph(c)`: Checks if `c` is a graphic character.

## 8.4 String-Conversion Functions
String conversion functions help in converting strings to numeric values.

### 8.4.1 Function strtod
Converts a string to a `double` value.

### 8.4.2 Function strtol
Converts a string to a `long` integer.

### 8.4.3 Function strtoul
Converts a string to an unsigned long integer.

## 8.5 Standard Input/Output Library Functions
This section covers functions for reading and writing characters and strings.

### 8.5.1 Functions fgets and putchar
- `fgets()`: Reads a string from input.
- `putchar()`: Prints a character to output.

### 8.5.2 Function getchar
Reads a single character from input.

### 8.5.3 Function sprintf
Formats and stores a string in a buffer.

### 8.5.4 Function sscanf
Reads formatted input from a string.

## 8.6 String-Manipulation Functions
Functions for copying and concatenating strings.

### 8.6.1 Functions strcpy and strncpy
Copies a string from source to destination.

### 8.6.2 Functions strcat and strncat
Concatenates two strings.

## 8.7 Comparison Functions
Functions to compare strings lexicographically.

## 8.8 Search Functions
Functions to search for characters and substrings within strings.

## 8.9 Memory Functions
Functions for memory manipulation such as copying, comparing, and setting memory blocks.

## 8.10 Other Functions
Additional string-related functions like `strerror()` and `strlen()`.

## 8.11 Secure C Programming
Discusses best practices for handling strings safely to avoid buffer overflows and security vulnerabilities.

---

### Author
This document provides an overview of Chapter 8 from "C How to Program" and serves as a reference for understanding characters and strings in C.
