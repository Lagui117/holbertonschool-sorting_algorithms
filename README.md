# 0x1B. C - Sorting algorithms & Big O

## 📚 Description

This project focuses on implementing several classic **sorting algorithms** in C, analyzing their **Big O complexity**, and understanding their behavior through **step-by-step printing** after each swap.

---

## 🧠 Learning Objectives

At the end of this project, we are expected to be able to explain:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate time complexity
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm
- The difference between in-place and non in-place algorithms

---

## 🛠️ Requirements

- Code compiled on Ubuntu 20.04 using:  
  `gcc -Wall -Wextra -Werror -pedantic -std=gnu89`
- No global variables
- No usage of standard library functions (`printf`, `puts`, etc.) unless specified
- Use of `print_array` and `print_list` functions provided by Holberton
- Maximum of 5 functions per file
- Betty-compliant code style and documentation

---

## 📁 Project Structure

| File                     | Description                                      |
|--------------------------|--------------------------------------------------|
| `0-bubble_sort.c`        | Bubble sort algorithm (arrays)                  |
| `1-insertion_sort_list.c`| Insertion sort (doubly linked lists)            |
| `2-selection_sort.c`     | Selection sort (arrays)                         |
| `3-quick_sort.c`         | Quick sort (Lomuto partition scheme)            |
| `sort.h`                 | Header file with all structs and prototypes     |
| `0-O`, `1-O`, `2-O`, `3-O` | Big O notation for best/avg/worst case per algo |
| `print_array.c`          | Provided by Holberton to print arrays           |
| `print_list.c`           | Provided by Holberton to print linked lists     |

---

## 🧪 How to Test

Each `.c` file has a corresponding `main.c` example provided. To test:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble
