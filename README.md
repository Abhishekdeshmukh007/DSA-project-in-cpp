# DSA-project-in-cpp
A collection of Data Structures and Algorithms implemented in C++, covering arrays, linked lists, stacks, queues, trees, graphs, sorting, searching, and more.
1. Title
   Student Record Management System Using Linked List

2. Problem Statement
   To develop a Student Record Management System using a singly linked list that allows users to add, remove, search, and display student records dynamically.

3. Objective
   To understand the concept of singly linked lists.

   To store student details dynamically.

   To add new student records.

   To remove a student using their roll number.

   To search for a student using their roll number.

   To display all student records.

4. Algorithm
   1) Start

2) Initialize the head pointer to NULL.

3) Display the menu:

   Add Student

   Remove Student

   Search Student

   Display All Students

   Exit

4) Read the user's choice.

5) If Add Student:

   Create a new node.

   Enter roll number, name, and marks.

   Add the node to the end of the linked list.

6) If Remove Student:

   Enter the roll number.

   Search for the student.

   If found, remove the corresponding node.

   Otherwise, display "Student not found".

7) If Search Student:

   Enter the roll number.

   Traverse the linked list.

   Display the student's details if found.

8) If Display All Students:

   Traverse the linked list.

   Display all student records.

9) If Exit, terminate the program.

10) Otherwise, display Invalid Choice.

11) Repeat the menu until the user selects Exit.

12) Stop

FLOW CHART :

             ┌───────────────┐
             │     START     │
             └───────┬───────┘
                     │
                     ▼
             ┌───────────────┐
             │ Initialize    │
             │ head = NULL   │
             └───────┬───────┘
                     │
                     ▼
             ┌───────────────┐
             │ Display Menu  │
             └───────┬───────┘
                     │
                     ▼
             ┌───────────────┐
             │ Enter Choice  │
             └───────┬───────┘
                     │
          ┌──────────┼───────────┐
          │          │           │
          ▼          ▼           ▼
      Add Student  Remove      Search
          │        Student     Student
          │          │           │
          ▼          ▼           ▼
      Create Node  Find Node   Find Node
          │          │           │
          ▼          ▼           ▼
      Add to List  Delete Node Display
          │          │          Details
          │          │           │
          └──────────┼───────────┘
                     │
                     ▼
             ┌───────────────┐
             │ Display All   │
             │   Students    │
             └───────┬───────┘
                     │
                     ▼
             ┌───────────────┐
             │   Exit?       │
             └───────┬───────┘
                 No  │  Yes
                 ┌───┴───┐
                 │       │
                 ▼       ▼
          ┌──────────┐  ┌───────────┐
          │ Display  │  │    STOP   │
          │   Menu   │  └───────────┘
          └────┬─────┘
               │
               └──────────────► Back to Menu
