# Chapter 9: Formatted Input/Output

## Table of Contents
- [9.1 Introduction](#91-introduction)
- [9.2 Streams](#92-streams)
- [9.3 Formatting Output with printf](#93-formatting-output-with-printf)
- [9.4 Printing Integers](#94-printing-integers)
- [9.5 Printing Floating-Point Numbers](#95-printing-floating-point-numbers)
  - [9.5.1 Conversion Specifiers e, E, and f](#951-conversion-specifiers-e-e-and-f)
  - [9.5.2 Conversion Specifiers g and G](#952-conversion-specifiers-g-and-g)
  - [9.5.3 Demonstrating Floating-Point Conversion Specifiers](#953-demonstrating-floating-point-conversion-specifiers)
- [9.6 Printing Strings and Characters](#96-printing-strings-and-characters)
- [9.7 Other Conversion Specifiers](#97-other-conversion-specifiers)
- [9.8 Printing with Field Widths and Precision](#98-printing-with-field-widths-and-precision)
  - [9.8.1 Field Widths for Integers](#981-field-widths-for-integers)
  - [9.8.2 Precisions for Integers, Floating-Point Numbers, and Strings](#982-precisions-for-integers-floating-point-numbers-and-strings)
  - [9.8.3 Combining Field Widths and Precisions](#983-combining-field-widths-and-precisions)
- [9.9 printf Format Flags](#99-printf-format-flags)
  - [9.9.1 Right- and Left-Alignment](#991-right--and-left-alignment)
  - [9.9.2 Printing Positive and Negative Numbers with and without the + Flag](#992-printing-positive-and-negative-numbers-with-and-without-the--flag)
  - [9.9.3 Using the Space Flag](#993-using-the-space-flag)
  - [9.9.4 Using the # Flag](#994-using-the--flag)
  - [9.9.5 Using the 0 Flag](#995-using-the-0-flag)
- [9.10 Printing Literals and Escape Sequences](#910-printing-literals-and-escape-sequences)
- [9.11 Formatted Input with scanf](#911-formatted-input-with-scanf)
  - [9.11.1 scanf Syntax](#9111-scanf-syntax)
  - [9.11.2 scanf Conversion Specifiers](#9112-scanf-conversion-specifiers)
  - [9.11.3 Reading Integers](#9113-reading-integers)
  - [9.11.4 Reading Floating-Point Numbers](#9114-reading-floating-point-numbers)
  - [9.11.5 Reading Characters and Strings](#9115-reading-characters-and-strings)
  - [9.11.6 Using Scan Sets](#9116-using-scan-sets)
  - [9.11.7 Using Field Widths](#9117-using-field-widths)
  - [9.11.8 Skipping Characters in an Input Stream](#9118-skipping-characters-in-an-input-stream)
- [9.12 Secure C Programming](#912-secure-c-programming)

---

## 9.1 Introduction
This chapter explores formatted input and output operations in C. It covers the use of `printf` and `scanf` for handling different data types and formatting styles.

## 9.2 Streams
C provides input and output streams for reading and writing data, allowing efficient handling of user input and formatted output.

## 9.3 Formatting Output with printf
The `printf` function is used for formatted output in C. It supports various conversion specifiers to display data in a structured manner.

## 9.4 Printing Integers
Explains how to print integers using different format specifiers and formatting options.

## 9.5 Printing Floating-Point Numbers
C provides multiple specifiers for printing floating-point numbers with different formats.

### 9.5.1 Conversion Specifiers e, E, and f
Used to format floating-point numbers in scientific and fixed-point notation.

### 9.5.2 Conversion Specifiers g and G
Chooses between scientific and fixed-point notation dynamically based on precision.

### 9.5.3 Demonstrating Floating-Point Conversion Specifiers
Shows practical examples of floating-point conversions.

## 9.6 Printing Strings and Characters
Discusses how to print individual characters and entire strings using `printf`.

## 9.7 Other Conversion Specifiers
Additional specifiers for printing pointers, hexadecimal, octal, and more.

## 9.8 Printing with Field Widths and Precision
Controls the width and precision of printed values.

### 9.8.1 Field Widths for Integers
Specifies the minimum width for integer output.

### 9.8.2 Precisions for Integers, Floating-Point Numbers, and Strings
Determines the number of decimal places or string length in output.

### 9.8.3 Combining Field Widths and Precisions
Shows how to use width and precision together for better formatting.

## 9.9 printf Format Flags
Special flags modify the output format in `printf`.

### 9.9.1 Right- and Left-Alignment
Controls whether text is right- or left-aligned.

### 9.9.2 Printing Positive and Negative Numbers with and without the + Flag
Adds a `+` sign for positive numbers.

### 9.9.3 Using the Space Flag
Adds a space before positive numbers.

### 9.9.4 Using the # Flag
Forces output format for numbers (e.g., `0x` for hex, `0` for octal).

### 9.9.5 Using the 0 Flag
Pads numbers with leading zeros.

## 9.10 Printing Literals and Escape Sequences
C includes special escape sequences like `\n` for new lines and `\t` for tabs.

## 9.11 Formatted Input with scanf
The `scanf` function reads formatted input from the user.

### 9.11.1 scanf Syntax
Explains how to use `scanf` for reading user input.

### 9.11.2 scanf Conversion Specifiers
Lists specifiers for different data types.

### 9.11.3 Reading Integers
Demonstrates reading integer values from user input.

### 9.11.4 Reading Floating-Point Numbers
Covers how to read floating-point values.

### 9.11.5 Reading Characters and Strings
Reads single characters and full strings.

### 9.11.6 Using Scan Sets
Restricts input to a defined set of characters.

### 9.11.7 Using Field Widths
Specifies the maximum width for input fields.

### 9.11.8 Skipping Characters in an Input Stream
Shows how to skip unwanted input characters.

## 9.12 Secure C Programming
Discusses secure methods for handling input and output to prevent vulnerabilities like buffer overflows.

---

### Author
This document provides an overview of Chapter 9 from "C How to Program" and serves as a reference for formatted input and output in C.

