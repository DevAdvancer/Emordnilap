# Emordnilap Word Checker

A simple C program that checks if two words are "emordnilap" pairs. An emordnilap pair consists of two words where one word is the reverse of the other.

## Features

- Takes two words as input
- Converts first letter of each word to uppercase
- Checks if one word is the reverse of the other
- Provides clear output indicating whether the words are emordnilap or not

## How to Compile and Run

1. Make sure you have a C compiler (like gcc) installed on your system
2. Compile the program:
   ```bash
   clang emordnilap.c -o emordnilap
   ```
   or 
   ```bash
   gcc emordnilap.c -o emordnilap
   ```
3. Run the program:
   ```bash
   ./emordnilap
   ```

## Usage

1. When prompted, enter the first word
2. Enter the second word
3. The program will tell you if the words form an emordnilap pair

## Example

```
Enter the first word: hello
Enter the second word: olleh
The words hello and olleh are emordnilap
```

## Technical Details

The program includes several key functions:
- `to_uppercase_first_word()`: Capitalizes the first letter of a word
- `reverse_string()`: Creates the reverse of a given string
- `is_emordnilap()`: Checks if two words form an emordnilap pair

## Requirements

- C compiler (GCC or CLANG recommended)
- Standard C libraries (stdio.h, string.h, ctype.h)