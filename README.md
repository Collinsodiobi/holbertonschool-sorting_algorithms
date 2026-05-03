# Sorting Algorithms & Big O

## Description
This project is part of the Holberton School low-level programming curriculum.  
It focuses on implementing different sorting algorithms in C and understanding their time complexity using Big O notation.

## Learning Objectives
By the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What Big O notation is and how to analyze time complexity
- How to choose the most efficient sorting algorithm depending on input
- What a stable sorting algorithm is

## Requirements
- Allowed editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc
- Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow Betty style
- No global variables allowed
- Maximum 5 functions per file
- No standard library functions allowed (e.g. printf, puts), except provided helpers
- All header files must be include guarded

## Data Structures
This project uses the following doubly linked list structure:

```c
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
