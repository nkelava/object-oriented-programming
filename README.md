# Object-oriented-programming

These are my assignments for my university class Object Oriented Programming.

Learned skill/topics in class:

1. to define main concepts and principles of OOP

2. to describe, recognise, apply objects and classes in OOP

3. STL, static members, friend functions and classes, overloading, inheritance, virtual and abstact classes, interfaces, templates, exceptions

## Assignments

Each assignment folder has one Visual Studio solution (`.sln`) at its root that opens all of its tasks.
Every task's entry point is `main.cpp`.

| # | Folder | Topic | Tasks |
|---|--------|-------|-------|
| 1 | [`01-stream-formatting`](01-stream-formatting) | I/O stream manipulators | Formatting booleans, number bases and floating-point output |
| 2 | [`02-pointers-dynamic-memory`](02-pointers-dynamic-memory) | Pointers, references, dynamic memory | 1. Min/max of a dynamic array · 2. Circle intersections · 3. Increment an element by reference · 4. Fibonacci array · 5. Growing a dynamic array · 6. Vector-like dynamic array |
| 3 | [`03-stl-strings-containers`](03-stl-strings-containers) | STL `vector`, `string`, `list` | 1. Vector sums and min/max · 2. Reverse word order · 3. Erase all substrings · 4. Longest common substring · 5. Pig Latin translator · 6. List manipulation · 7. Bit stuffing · 8. Bit unstuffing |
| 4 | [`04-classes-card-game`](04-classes-card-game) | Classes | Card game (`Card`, `Deck`, `Player`) |
| 5 | [`05-inheritance`](05-inheritance) | Inheritance, exception classes | 1. Card game with input error handling · 2. Drawing on a character board (`Board`, `Point`) |
| 6 | [`06-polymorphism`](06-polymorphism) | Virtual functions, abstract classes | 1. Library of e-books and hard-copy books · 2. Coin guessing game · 3. Rock, paper, scissors |
| 8 | [`08-operator-overloading`](08-operator-overloading) | Operator overloading | `Money` class (restaurant bill) |
| 9 | [`09-templates`](09-templates) | Templates | 1. Function templates (sorting) · 2. `Stack` class template |
| 10 | [`10-exceptions-stl-algorithms`](10-exceptions-stl-algorithms) | Exceptions, STL algorithms | Reading numbers from a file and processing them with STL algorithms |

Assignment 7 is not included in this repository.

Tasks that read input files (`06-polymorphism/task-1-library/books.txt`, `10-exceptions-stl-algorithms/numbers.txt`)
expect the file in the working directory. Visual Studio uses the project folder by default.
