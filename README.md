# 0x19. C - Stacks, Queues - LIFO, FIFO

(<img src="https://i.ibb.co/Jpry0QT/CFYYWy6-UEAE9-Ow.png" alt="CFYYWy6-UEAE9-Ow" border="0">)

---


## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

---

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

---

## More Info

### Data structures

Please use the following data structures for this project. Don’t forget to include them in your header file

<img src="https://i.ibb.co/zQwXK4q/imagen-3.jpg" alt="imagen-3" border="0">

<img src="https://i.ibb.co/K0kHBHt/imagen-4.jpg" alt="imagen-4" border="0">

## Compilation & Output

- Your code will be compiled this way:

<img src="https://i.ibb.co/3pyyXPT/imagen-5.jpg" alt="imagen-5" border="0">

- Any output must be printed on stdout
- Any error message must be printed on stderr
- Here is a link to a GitHub repository that could help you making sure your errors are printed on stderr

---

## The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

<img src="https://i.ibb.co/ZSqX7g5/imagen-1.jpg" alt="imagen-1" border="0">

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

<img src="https://i.ibb.co/0B7TBZ4/imagen-2.jpg" alt="imagen-2" border="0">








