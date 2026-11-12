# Student Record Management System

## About the Project

This project is a Student Record Management System developed using C programming. It helps manage student information through a menu-driven application.

The program uses a singly linked list to store student records. It also supports adding, deleting, modifying, displaying, sorting, and reversing records.

Student details can be saved in a file and loaded again when the program starts.

## Features

- Add new student records.
- Delete records using roll number or name.
- Display all student records.
- Modify student details.
- Sort records alphabetically by name.
- Sort records by percentage in descending order.
- Reverse the student linked list.
- Delete all student records.
- Save and load records using file handling.

## Technologies Used

- C Programming
- GCC Compiler
- Singly Linked List
- Dynamic Memory Allocation
- File Handling

## Project Files

| File | Description |
|---|---|
| main.c | Main function and menu operations |
| header.h | Structure definition and function declarations |
| addstudentdata.c | Adds new student records |
| deletenode.c | Deletes a selected student record |
| deleteall.c | Deletes all student records |
| printdata.c | Displays student records |
| modifydata.c | Modifies existing records |
| sortdata.c | Sorts student records |
| savedata.c | Saves and loads student data |
| revnode.c | Reverses the linked list |
| Makefile | Compiles the project |

## Compilation

Compile the source files using GCC:

```bash
gcc main.c addstudentdata.c deletenode.c deleteall.c printdata.c modifydata.c sortdata.c savedata.c revnode.c -o student
```

## Execution

Run the program:

```bash
./student
```

## Data Storage

The program uses `student.dat` to store student records. Saved records can be loaded when the application starts.

## Concepts Used

- Structures
- Pointers
- Functions
- Singly Linked Lists
- Dynamic Memory Allocation
- Searching and Sorting
- File Operations
- Memory Management

## Objective

The objective of this project is to understand linked list operations, pointers, dynamic memory allocation, and file handling through a practical C programming application.
