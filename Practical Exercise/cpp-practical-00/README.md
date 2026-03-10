# C++ Programming Fundamentals - Practical Report

**Student Name:** Ranjung Yeshi Norbu  
**Student Number:** 02230297  
**Course:** BE Software Engineering  
**Date:** March 10, 2026

---

## Table of Contents
1. [Introduction](#introduction)
2. [Core Concepts Learned](#core-concepts-learned)
3. [Program Descriptions](#program-descriptions)
4. [Screenshots and Demonstrations](#screenshots-and-demonstrations)
5. [Key Takeaways](#key-takeaways)

---

## Introduction

This report documents my learning journey through 10 practical C++ programming exercises. Each program focuses on different fundamental concepts of programming, starting from basic output and gradually progressing to advanced topics like object-oriented programming. The exercises helped me understand how to write clean, functional code that solves real-world problems.

---

## Core Concepts Learned

### 1. **Basic Output and Variables**
I learned how to display information on the screen using `cout` and how to store data in variables. Variables are like containers that hold different types of information such as numbers (integers) and text (strings).

### 2. **Arithmetic Operations**
I practiced performing mathematical calculations including addition, subtraction, multiplication, division, and modulus (remainder). I also learned how to extract individual digits from numbers and calculate their sum.

### 3. **User Input and Type Conversion**
I learned how to get information from users using `cin` and how to convert between different data types. For example, calculating birth year from age requires subtracting age from the current year.

### 4. **Conditional Statements (If-Else)**
I learned how to make decisions in programs using if-else statements. This allows the program to do different things based on conditions - like assigning grades based on marks or validating input ranges.

### 5. **Loops (For and While)**
Loops help repeat actions multiple times without writing the same code again. I used:
- **While loops** to extract digits from numbers
- **For loops** to create patterns, print tables, and iterate through arrays
- **Nested loops** to create triangular patterns

### 6. **Functions**
Functions are reusable blocks of code that perform specific tasks. I learned how to:
- Create functions that return values (like calculating digit sum)
- Create functions that return true/false (like checking if a number is prime)
- Pass parameters to functions and get results back

### 7. **String Manipulation**
I learned how to work with text data:
- Finding the length of strings
- Converting text to uppercase and lowercase
- Extracting specific characters (like initials)
- Finding spaces and splitting words

### 8. **Arrays**
Arrays store multiple values of the same type in a single variable. I learned how to:
- Store marks for multiple subjects
- Loop through arrays to find highest, lowest, and average values
- Count how many values meet certain conditions

### 9. **Vectors and STL (Standard Template Library)**
Vectors are like arrays but more flexible. I learned how to:
- Add and remove elements dynamically
- Sort values automatically using `sort()`
- Find minimum and maximum using `min_element()` and `max_element()`
- Calculate sum using `accumulate()`
- Use lambda functions to filter data

### 10. **Object-Oriented Programming (Classes)**
Classes allow us to bundle data and functions together. I learned how to:
- Create a class with private data (encapsulation)
- Use constructors to initialize objects
- Create methods to perform operations on object data
- Generate formatted reports using class methods

---

## Program Descriptions

### 1. Personal Introduction Output
**File:** `Personal_Introduction_Output.cpp`

**Purpose:** This program displays my personal information in a formatted way.

**What I learned:**
- How to use `cout` to display text
- How to declare and assign values to variables
- How to format output to make it look neat
- Basic string and integer variable types

---

### 2. Arithmetic with Student Number
**File:** `Arithmetic_with_Student_Number.cpp`

**Purpose:** Performs various arithmetic operations on my student number (02230297).

**What I learned:**
- How to extract individual digits using modulus (%) and division (/)
- How to sum all digits in a number
- How to check if a number is odd or even
- How to use while loops for repetitive calculations

---

### 3. User Input & Type Conversion
**File:** `User Input & Type Conversion.cpp`

**Purpose:** Takes user input and performs calculations based on that input.

**What I learned:**
- How to read user input using `cin`
- How to perform arithmetic with user-provided values
- How to calculate birth year from age
- How to predict future years

---

### 4. Conditional Grade Classification
**File:** `Conditional Grade Classification.cpp`

**Purpose:** Classifies marks into grades (Distinction, Merit, Pass, or Fail).

**What I learned:**
- How to use if-else statements for decision making
- Input validation (checking if marks are between 0 and 100)
- How to use logical operators (&&, ||)
- How to provide different outputs based on conditions

**Grading System:**
- **75-100:** Distinction
- **60-74:** Merit
- **40-59:** Pass
- **0-39:** Fail

---

### 5. Loop-Based Pattern Generation
**File:** `LoopBased Pattern Generation.cpp`

**Purpose:** Uses loops to create patterns and tables.

**What I learned:**
- How to use for loops to repeat actions
- How to use nested loops (loops inside loops) to create patterns
- How to create triangular patterns with stars
- How to generate multiplication tables

**Output includes:**
- Name repeated based on its length
- Star triangle pattern
- Multiplication table for the last digit of student number

---

### 6. Function Design & Modular Programming
**File:** `Function Design & Modular Programming.cpp`

**Purpose:** Demonstrates how to organize code into reusable functions.

**What I learned:**
- How to define functions with parameters and return values
- How to return boolean values (true/false)
- How to pass strings and integers to functions
- How to break complex problems into smaller functions

**Functions created:**
- `digitSum()` - calculates sum of digits
- `isPrime()` - checks if a number is prime
- `countVowels()` - counts vowels in a name
- `reverseString()` - reverses a string

---

### 7. String Manipulation & Analysis
**File:** `String Manipulation & Analysis.cpp`

**Purpose:** Performs various operations on text strings.

**What I learned:**
- How to use `length()` to find string size
- How to convert characters using `toupper()` and `tolower()`
- How to extract initials from a full name
- How to find spaces and extract substrings using `find()`

---

### 8. Array Operations & Statistics
**File:** `Array Operations & Statistics.cpp`

**Purpose:** Stores and analyzes marks using arrays.

**What I learned:**
- How to declare and initialize arrays
- How to loop through arrays to process each element
- How to find highest and lowest values
- How to calculate average and count values above average
- How to create visual bar charts using stars

---

### 9. Vector & Dynamic Collections
**File:** `Vector & Dynamic Collections.cpp`

**Purpose:** Uses vectors for flexible data storage and manipulation.

**What I learned:**
- How vectors differ from arrays (dynamic sizing)
- How to use STL algorithms: `sort()`, `min_element()`, `max_element()`, `accumulate()`
- How to use lambda functions with `remove_if()`
- How to use `erase()` to remove elements
- How to format decimal output using `setprecision()`

---

### 10. Classes & Object-Oriented Design
**File:** `Classes & Object-Oriented Design.cpp`

**Purpose:** Creates a Student class to manage student information and marks.

**What I learned:**
- How to define a class with private and public sections
- How to use constructors to initialize objects
- How to create methods to perform calculations
- How to encapsulate data (keep it private)
- How to generate formatted reports

**Class features:**
- Stores student name, number, and marks
- Calculates average, highest, and lowest marks
- Determines classification (Merit/Pass/Fail)
- Prints formatted academic report

---

## Screenshots and Demonstrations

### Screenshot 1: Personal Introduction Output
![Personal Introduction](screenshots/personal_intro.png)

**Description:** This screenshot shows the formatted output of my personal information including name, student number, and course. The program uses string and integer variables to store data and displays it in a clean, professional format with decorative borders.

---

### Screenshot 2: Arithmetic Operations
![Arithmetic Operations](screenshots/arithmetic.png)

**Description:** This demonstrates various arithmetic operations performed on my student number (02230297). The program calculates the sum of digits (2+2+3+0+2+9+7=25), checks if the number is odd or even, finds the remainder when divided by 7, and multiplies it by 3. This exercise helped me understand modulus operations and digit extraction.

---

### Screenshot 3: User Input & Type Conversion
![User Input](screenshots/user_input.png)

**Description:** This shows how the program takes user input (name, student number, and age) and performs calculations to determine birth year and the year when the person will turn 100 years old. It demonstrates the use of `cin` for input and basic arithmetic for age calculations.

---

### Screenshot 4: Grade Classification
![Grade Classification](screenshots/grade_classification.png)

**Description:** This screenshot displays the conditional grade classification system. Based on the marks entered (in this example, let's say 82), the program determines the grade (Distinction) and displays whether the student passed or failed. Input validation ensures marks are between 0 and 100.

---

### Screenshot 5: Loop-Based Patterns
![Loop Patterns](screenshots/loop_patterns.png)

**Description:** This demonstrates three different uses of loops:
1. **Name repetition** - My first name "Ranjung" (7 letters) is printed 7 times
2. **Star triangle** - A triangle pattern made of stars with height equal to my full name length (19 rows)
3. **Multiplication table** - Times table for 7 (the last digit of my student number)

---

### Screenshot 6: Function Results
![Functions](screenshots/functions.png)

**Description:** This shows the output of four different functions working together:
- `digitSum(2230297)` returns 25
- `isPrime(2230297)` checks if the number is prime
- `countVowels("Ranjung Yeshi Norbu")` counts the vowels (a, u, e, i, o, u = 7 vowels)
- `reverseString()` reverses the name

This demonstrates modular programming where each task is handled by a separate function.

---

### Screenshot 7: String Manipulation
![String Manipulation](screenshots/string_manipulation.png)

**Description:** This shows various string operations on my name:
- Length of full name (19 characters including spaces)
- Uppercase and lowercase conversions
- Extracted initials (R.Y.N)
- Length of first name only (7 characters)

---

### Screenshot 8: Array Statistics
![Array Statistics](screenshots/array_stats.png)

**Description:** This displays a table of 5 marks with visual bar representation (stars). Each mark is displayed with its index, value, and a bar where each star represents 10 marks. The program calculates and displays:
- Highest mark: 81
- Lowest mark: 36
- Average: 66.0
- Number of marks above average: 3

---

### Screenshot 9: Vector Operations
![Vector Operations](screenshots/vector_operations.png)

**Description:** This demonstrates dynamic vector operations:
1. User enters 6 values
2. Program displays original values
3. Values are sorted automatically
4. Minimum and maximum are found
5. Sum and average are calculated
6. Values below average are removed
7. Final vector is displayed

This shows the power of C++ Standard Template Library (STL).

---

### Screenshot 10: Object-Oriented Design
![OOP Class](screenshots/class_oop.png)

**Description:** This shows the academic report generated by the Student class. The report includes:
- Student name and number
- All marks entered
- Average mark
- Highest and lowest marks
- Classification based on average (Merit, Pass, or Fail)

This demonstrates encapsulation, where all student-related data and operations are bundled together in one class.

---

## Key Takeaways

Through these 10 practical exercises, I have gained a solid foundation in C++ programming. Here are my main takeaways:

### Technical Skills
1. **Problem Solving:** I can now break down complex problems into smaller, manageable pieces
2. **Code Organization:** I understand how to structure programs using functions and classes
3. **Data Management:** I can work with different data structures (variables, arrays, vectors, objects)
4. **Logic Building:** I can implement conditional logic and loops to solve various problems

### Programming Concepts
1. **Variables and Data Types:** Understanding the difference between int, string, float, and bool
2. **Control Structures:** Using if-else for decisions and for/while for repetition
3. **Functions:** Writing reusable code that makes programs more maintainable
4. **OOP Principles:** Encapsulating data and behavior in classes

### Best Practices
1. **Code Readability:** Using meaningful variable names and proper formatting
2. **Input Validation:** Checking user input to prevent errors
3. **Modular Design:** Breaking code into functions for better organization
4. **Documentation:** Adding comments to explain complex logic

### Next Steps
Going forward, I plan to:
- Explore more advanced C++ features like inheritance and polymorphism
- Practice solving algorithmic problems
- Learn about file handling and data persistence
- Build larger projects that combine multiple concepts

---

## Conclusion

These practical exercises have taken me from writing simple output statements to creating complete object-oriented programs. Each program built upon the previous one, gradually introducing new concepts while reinforcing earlier lessons. I now feel confident in my understanding of C++ fundamentals and ready to tackle more complex programming challenges.

The hands-on approach of these exercises was particularly valuable - rather than just reading about programming concepts, I got to implement them and see the results immediately. This practical experience has been essential in developing my programming skills.

---

**End of Report**