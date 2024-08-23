# 0x06. C - Pointers, arrays, and strings

This repository contains solutions for the tasks in the "0x06. C - Pointers, arrays, and strings" project. The tasks focus on various operations involving strings, arrays, and pointers in C.

## Tasks

### 0. 98 Battery st.

**Prototype**: `void reset_to_98(int *n);`

Write a function that takes a pointer to an integer and updates the value it points to to 98.

### 1. Don't swap horses in crossing a stream

**Prototype**: `void swap_int(int *a, int *b);`

Write a function that swaps the values of two integers.

### 2. This report, by its very length, defends itself against the risk of being read

**Prototype**: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

### 3. I do not fear computers. I fear the lack of them

**Prototype**: `int _strlen(char *s);`

Write a function that returns the length of a string.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

**Prototype**: `void _puts(char *str);`

Write a function that prints a string, followed by a new line, to stdout.

### 5. I can only go one way. I've not got a reverse gear

**Prototype**: `char *_strcat(char *dest, char *src);`

Write a function that concatenates two strings.

### 6. Expect the best. Prepare for the worst. Capitalize on what comes

**Prototype**: `char *cap_string(char *);`

Write a function that capitalizes all words of a string. Words are separated by space, tabulation, new line, or various punctuation marks.

### 7. Mozart composed his music not for the elite, but for everybody

**Prototype**: `char *leet(char *);`

Write a function that encodes a string into 1337 (Leetspeak).

### 8. rot13

**Prototype**: `char *rot13(char *);`

Write a function that encodes a string using rot13.

### 9. Numbers have life; they're not just symbols on paper

**Prototype**: `void print_number(int n);`

Write a function that prints an integer using only `_putchar`.

### 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work

**Prototype**: `void print_buffer(char *b, int size);`

Write a function that prints a buffer in a specified format. The buffer should be printed 10 bytes per line, with each byte displayed in hexadecimal and printable characters shown as characters or `.` if not printable.

### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art

**Prototype**: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`

Write a function that adds two numbers represented as strings and stores the result in a buffer.

### 12. Noise is a buffer, more effective than cubicles or booth walls

**Prototype**: `void print_buffer(char *b, int size);`

Write a function that prints a buffer, ensuring each line of the buffer is printed with specific formatting requirements.

## Compilation

The code was compiled using `gcc` with the following flags:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file>.c -o <output>

