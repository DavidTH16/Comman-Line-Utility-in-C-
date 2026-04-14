# Command Line Utility

## What is this project for?

This project is a simple C++ command line utility that provides four distinct tools:

- `basic_calculator` — addition, subtraction, multiplication, and division
- `basic_statistic` — simple statistics such as minimum, maximum, and average
- `word_counter` — count the number of words in a text phrase
- `word_palidrom` — check whether a word is a palindrome

The program presents a main menu and allows users to select the utility they want to use from the console.

## How to install and setup

### Requirements

- A C++ compiler such as `g++`, `clang++`, or Microsoft Visual C++
- A terminal or command prompt

### Build instructions

1. Open a terminal and navigate to the project folder:

```bash
cd "\Command line utility"
```

2. Compile the source files. For example, using `g++`:
In this project the executable file is called main.exe, you can name the file as you like it.
e.g. command_line_utility
```bash
g++ main.cpp basic_calculator.cpp basic_statistic.cpp word_counter.cpp word_palidrom.cpp menu.cpp -o command_line_utility
```

3. Run the compiled executable:
```bash
./command_line_utility
```

> If using Windows Command Prompt, run `command_line_utility.exe` instead.

## Examples of use

When you run the program, it will display a menu with options. Example interaction:

```text
1. Basic Calculator
2. Basic Statistic
3. Count Words
4. Palindrome Checker
5. Exit
```

### Example: Basic Calculator

- Choose option `1`
- Follow the prompts to enter two numbers and an operation
- The program displays the calculation result

### Example: Count Words

- Choose option `3`
- Enter a phrase when prompted
- The program returns the number of words in the phrase

### Example: Palindrome Checker

- Choose option `4`
- Enter a word when prompted
- The program reports whether the word is a palindrome
