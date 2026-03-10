# C++ Programming Fundamentals - Practical Report

## Introduction 

This report documents a comprehensive practical exercise in C++ programming fundamentals, covering essential concepts from basic syntax to object-oriented programming. The ten exercises demonstrate progressive skill development, beginning with simple input/output operations and advancing through data structures, control flow, functions, and culminating in class-based design. Each program builds upon previous concepts, reinforcing core principles of procedural and object-oriented programming paradigms.

The practical explores key C++ features including variable declaration and type conversion, string manipulation using the Standard Library, conditional statements and loop constructs, array and vector operations, modular function design, and encapsulation through classes. This hands-on approach solidifies theoretical knowledge by implementing real-world programming scenarios, emphasizing both syntax mastery and computational thinking. 

## Program Descriptions

## 1. Personal Introduction Output

**File:** `Personal_Introduction_Output.cpp`

This exercise introduced fundamental C++ program structure, including the `iostream` library and the `std` namespace. The program demonstrates output stream operations using `cout`, which provides type-safe formatted output through operator overloading—a significant advantage over C's `printf()`. 

**Key Concepts Learned:**
- Variable declaration and initialization for primitive types (`int`, `string`)
- Output stream chaining using the insertion operator (`<<`)
- Escape sequences for formatting (`\n`, `\t`)
- The importance of namespace management in C++ programs

This foundational exercise establishes proper program structure, including headers, main function, and return statements, which form the basis for all subsequent programs.

### Output Screenshot

![Program Output](assets/1.png)

**Description:** This screenshot shows the output of my personal information. It uses string and integer variables to store data and displays them in a formatted way.

## 2. Arithmetic with Student Number

**File:** `Arithmetic_with_Student_Number.cpp`

This exercise demonstrates arithmetic operators and the practical application of modulus operations for digit manipulation.

**Key Concepts Learned:**
- Arithmetic operators (`+`, `-`, `*`, `/`, `%`) and their precedence
- The modulus operator (`%`) for determining divisibility and extracting remainders
- Bit-level operations for odd/even checking (testing the least significant bit)
- Integer division vs. floating-point division in C++
- Digit extraction using division and modulus operations

**Challenge:** Initially struggled with integer overflow when multiplying large student numbers. Resolved by recognizing the range limits of `int` type and considering when to use `long` for larger calculations.

### Output Screenshot

![Program Output](assets/2.png)

**Description:** This screenshot shows the output of various arithmetic operations performed on my student number. The program calculates the sum of digits in my student number, checks if the number is odd or even, finds the remainder when divided by 7, and multiplies it by 3. This exercise helped me understand modulus operations and digit extraction.

## 3. String Manipulation & Analysis

**File:** `String Manipulation & Analysis.cpp`

This task involves comprehensive string manipulation, including character-level transformations, pattern detection, and substring extraction.

**Key Concepts Learned:**
- String object methods from the C++ Standard Library (`length()`, `find()`)
- Character-level manipulation using `toupper()` and `tolower()` from `<cctype>`
- String traversal using loops and index-based access
- Boolean flag patterns for state tracking (detecting word boundaries)
- The difference between C-style strings (char arrays) and C++ `std::string` objects

**Technical Insight:** The initial extraction algorithm required careful handling of edge cases—strings starting with spaces, multiple consecutive spaces, or single-word names. Implemented a state machine approach using a boolean flag to track whether we're at the start of a new word, demonstrating the importance of defensive programming.

**Real-world Application:** These string manipulation techniques are fundamental for text processing, data validation, and parsing user input in production applications.

### Output Screenshots

![program Output](assets/3.png)

**Description:** This shows various string operations on string name:
- Length of full name (19 characters including spaces)
- Uppercase and lowercase conversions
- Extracted initials (R.Y.N)
- Length of first name only (7 characters)

## 4. User Input & Type Conversion

**File:** `User Input & Type Conversion.cpp`

This exercise demonstrates input stream operations and the importance of data validation in interactive programs.

**Key Concepts Learned:**
- Input stream operations using `cin` and extraction operator (`>>`)
- Type conversion and implicit casting between data types
- Arithmetic with temporal data (dates, ages)
- Input buffer management and potential issues with `cin`

**Technical Insight:** The `cin` object extracts formatted input but requires careful handling of type mismatches and buffer flushing. For robust programs, input validation is critical—checking for negative ages, invalid characters, or out-of-range values prevents runtime errors.

**Challenge:** Discovered that `cin >>` leaves the newline character in the buffer, which can cause issues when mixing `cin >>` with `getline()`. This highlights the importance of understanding stream state management in C++.

### Output Screenshot

![Program Output](assets/4.png)

**Description:** This output shows how the program takes user input (name, student number, and age) and performs calculations to determine birth year and the year when the person will turn 100 years old. It also demonstrates the use of `cin` for input and basic arithmetic for age calculations.

## 5. Conditional Grade Classification

**File:** `Conditional Grade Classification.cpp`

This exercise implements a multi-tier decision structure using conditional statements to classify academic performance.

**Grading System:**
- **75-100:** Distinction
- **60-74:** Merit
- **40-59:** Pass
- **0-39:** Fail

**Key Concepts Learned:**
- Conditional control flow using `if-else-if` chains
- Logical operators for compound conditions (`&&`, `||`, `!`)
- Input validation and boundary checking
- Short-circuit evaluation in boolean expressions

**Technical Insight:** The order of conditional checks matters significantly. By structuring conditions from highest to lowest grade, we ensure efficient evaluation. Each condition only executes if previous conditions failed, demonstrating the concept of mutually exclusive branches.

**Alternative Approaches Considered:** Could have used a `switch` statement, but since we're evaluating ranges (not discrete values), the `if-else-if` ladder is more appropriate. This exercise reinforced the importance of selecting the right control structure for the problem domain.

**Real-world Application:** This pattern is ubiquitous in business logic—pricing tiers, access level determination, and threshold-based alerts all use similar conditional structures.

### Output Screenshot

![Program Output](assets/5.png)

**Description:** This output displays the conditional grade classification system. First the user have to give an input (marks) and based on the marks entered (in this example, let's say 72), the program determines the grade (Merit) and displays whether the student passed or failed. Input validation ensures marks are between 0 and 100.

## 6. Loop-Based Pattern Generation

**File:** `LoopBased Pattern Generation.cpp`

This exercise explores iterative control structures, demonstrating both simple and nested loop patterns for repetitive operations and 2D pattern generation.

**Key Concepts Learned:**
- Loop constructs (`for`, `while`, `do-while`) and their appropriate use cases
- Nested loop structures for multi-dimensional problems
- Loop counter variables and iteration control
- The relationship between loop depth and time complexity

**Technical Insight:** Nested loops create two-dimensional iterations where the outer loop controls rows and the inner loop controls columns. This is fundamental for matrix operations, pattern generation, and algorithm analysis. The time complexity of nested loops is O(n²), which becomes significant for large datasets.

**Challenge:** Initially used a `while` loop for pattern generation but found `for` loops more readable when the iteration count is predetermined. This exercise reinforced that choosing the right loop construct improves code clarity and maintainability.

**Pattern Recognition:** The triangle pattern (row i has i asterisks) demonstrates how nested loops can create visual structures, a technique useful in graphics programming, data visualization, and ASCII art generation.

### Output Screenshot

![Program Output](assets/6.png)

**Description:** This demonstrates three different uses of loops:
1. **Name repetition** - My first name "Ranjung" (7 letters) is printed 7 times
2. **Star triangle** - A triangle pattern made of stars with height equal to my full name length (19 rows)
3. **Multiplication table** - Times table for 7 (the last digit of my student number)

### 7. Array Operations & Statistics

**File:** `Array Operations & Statistics.cpp`

This exercise introduces fixed-size arrays and demonstrates statistical analysis through iterative algorithms.

**Key Concepts Learned:**
- Array declaration with compile-time size specification
- Zero-based indexing and boundary awareness
- Aggregate operations (sum, min, max) using loops
- Average calculation and floating-point precision
- Algorithm efficiency for linear searches (O(n) time complexity)

**Technical Insight:** Arrays in C++ are stored in contiguous memory, enabling O(1) random access but requiring fixed size at compile time. This is fundamentally different from dynamic structures like vectors. The trade-off is performance (fast access) versus flexibility (no resizing).

**Challenge:** Calculating the average required careful attention to integer division pitfalls. Dividing two integers truncates the result, so casting to `double` was necessary for accurate floating-point results: `double avg = static_cast<double>(sum) / size;`

**Algorithm Design:** Finding min/max required initializing with array values rather than arbitrary numbers (like 0), since marks could legitimately be 0 or 100. This demonstrates defensive programming practices.

### Output Screenshot

![Program Output](assets/7.png)

**Description:** This displays a table of 5 marks with visual bar representation (stars). Each mark is displayed with its index, value, and a bar where each star represents 10 marks. The program calculates and displays:
- Highest mark
- Lowest mark
- Average
- Number of marks above average

### 8. Function Design & Modular Programming

**File:** `Function Design & Modular Programming.cpp`

This exercise is about writing functions to perform specific tasks. We have to write a function to calculate the sum of digits in a number, a function to check if a number is prime, a function to count the number of vowels in a name, and a function to reverse a string.

### Implementation of the functions:

I have defined 5 functions:

1. `digitSum(int number)` 

This function takes an integer as input and returns the sum of its digits.

2. `isPrime(int number)`

This function takes an iteger as input and returns a boolean value indicating whether the number is prime or not.

- I have used the return type `bool` to indicate true or false for prime number checking.

3. `countVowels(string name)`

This function takes a string as input and returns the count of vowels (a, e, i, o, u) in the name.

- The logic I used is to loop through each character in the string and check if it is a vowel, incrementing the count accordingly. I have used the `tolower()` function to handle both uppercase and lowercase vowels and used a simple if condition to check for vowels.

4. `reverseString(string str)`

This function takes a string as input that is full name and returns the reversed version of the string.

5. `main()`

In this function it calls the above functions with appropriate arguments and displays the results.

**Functions created:**
- `digitSum()` - calculates sum of digits
- `isPrime()` - checks if a number is prime
- `countVowels()` - counts vowels in a name
- `reverseString()` - reverses a string

**Key Concepts Learned:**
- Function declaration, definition, and invocation
- Parameter passing mechanisms (pass-by-value vs. pass-by-reference)
- Return types including `void`, primitive types, and `bool`
- Function prototypes and forward declarations
- The DRY principle (Don't Repeat Yourself) through code reuse

**Technical Insight:** Functions enable modular programming by encapsulating logic into reusable units. Each function should have a single, well-defined purpose (Single Responsibility Principle). The `isPrime()` function demonstrates boolean logic, while `countVowels()` shows string traversal and character testing.

**Optimization Consideration:** The prime checking algorithm could be optimized by only checking divisors up to √n rather than n/2, reducing time complexity from O(n) to O(√n). For production code, this optimization matters for large numbers.

**Pass-by-Value vs. Pass-by-Reference:** Strings were passed by value in this exercise, but for large strings, passing by `const` reference (`const string&`) would be more efficient, avoiding unnecessary copies while preventing modification.

**Real-world Application:** Modular function design is fundamental to maintainable software. Breaking monolithic code into discrete functions enables unit testing, parallel development, and easier debugging.

### Output Screenshot

![Program Output](assets/8.png)

**Description:** This shows the output of four different functions working together:
- `digitSum(2230297)` returns 25
- `isPrime(2230297)` checks if the number is prime
- `countVowels("Ranjung Yeshi Norbu")` counts the vowels (a, u, e, i, o, u = 7 vowels)
- `reverseString()` reverses the full name.

This demonstrates modular programming where each task is handled by a separate function.

## 9. Vector & Dynamic Collections

**File:** `Vector & Dynamic Collections.cpp` 

This exercise explores the C++ Standard Template Library (STL), demonstrating the power of generic programming and algorithm reuse.

**Key Concepts Learned:**
- Vector container: dynamic sizing, automatic memory management, and O(1) amortized append
- STL algorithms: `sort()`, `min_element()`, `max_element()`, `accumulate()`
- Iterator-based programming for generic container access
- Lambda functions for inline predicate definition
- The erase-remove idiom for efficient element deletion
- `iomanip` manipulators for formatted output (`setprecision()`, `fixed`)

**Technical Insight:** Vectors manage dynamic memory automatically using RAII (Resource Acquisition Is Initialization), preventing memory leaks. When capacity is exceeded, vectors allocate a larger buffer (typically 2x), copy elements, and deallocate the old buffer. This amortized O(1) insertion is a key performance characteristic.

**Algorithm Efficiency:** The erase-remove idiom is crucial for efficient deletion. Naive approaches (erasing while iterating) cause repeated shifts and O(n²) complexity. The `remove_if()` + `erase()` pattern achieves O(n) by making a single pass.

**Lambda Functions:** The inline lambda `[&average](int value) { return value < average; }` captures `average` by reference and defines a predicate without requiring a separate function definition. This modern C++ feature improves code locality and readability.

**Vector vs. Array:** Unlike arrays, vectors provide bounds checking (with `at()`), size tracking, and dynamic resizing. The trade-off is slight overhead, but the safety and flexibility typically justify this cost.

### Output Screenshot

![Program Output](assets/9.png)

**Description:** This demonstrates dynamic vector operations:
1. User enters 6 values
2. Program displays original values
3. Values are sorted automatically
4. Minimum and maximum are found
5. Sum and average are calculated
6. Values below average are removed
7. Final vector is displayed

This shows the power of C++ Standard Template Library (STL).

## 10. Classes & Object-Oriented Design

**File:** `Classes & Object-Oriented Design.cpp`

This exercise introduces object-oriented programming (OOP) through class design, demonstrating encapsulation, data abstraction, and the principle of bundling data with behavior.

**Key Concepts Learned:**
- Class definition with private data members and public member functions
- Constructor initialization for object state setup
- Encapsulation: information hiding through access modifiers (`private`, `public`)
- Member functions operating on object state
- The `this` pointer (implicit reference to the current object)
- Object lifetime and scope management

**Technical Insight:** Encapsulation provides two critical benefits: (1) **Data Integrity** - private members prevent invalid state modifications; (2) **Implementation Hiding** - internal representation can change without breaking client code. The Student class exposes a clean interface while hiding implementation details.

**Constructor Design:** The constructor initializes all member variables, ensuring no object exists in an undefined state. This is fundamental to defensive programming and prevents bugs from uninitialized memory.

**OOP vs. Procedural:** Compare this approach to a procedural design using separate variables and functions. The class approach bundles related data and operations, improving code organization, reducing coupling, and enabling concepts like inheritance and polymorphism in more complex systems.

**Real-world Application:** Classes model real-world entities, making code intuitive and maintainable. In production systems, classes encapsulate business logic, database entities, and service layers, forming the backbone of scalable software architecture.

**Design Pattern Recognition:** This exercise demonstrates the Single Responsibility Principle—the Student class manages student data and nothing else. As systems grow, this principle prevents classes from becoming unwieldy god objects.

**Class features:**
- Stores student name, number, and marks
- Calculates average, highest, and lowest marks
- Determines classification (Merit/Pass/Fail)
- Prints formatted academic report

### Output Screenshot

![Program Output](assets/10.png)

**Description:** This shows the academic report generated by the Student class. The report includes:
- Student name and number
- All marks entered
- Average mark
- Highest and lowest marks
- Classification based on average (Merit, Pass, or Fail)

This demonstrates encapsulation, where all student-related data and operations are bundled together in one class.

## Conclusion

This practical exercise provided comprehensive coverage of C++ fundamentals, progressing from basic syntax to object-oriented design. The ten programs demonstrated increasingly complex concepts, building a strong foundation in both procedural and OOP paradigms.

**Key Takeaways:**

1. **Language Fundamentals:** Mastered variable declaration, operators, control structures, and I/O operations that form the basis of all C++ programs.

2. **Data Structures:** Progressed from primitive types to arrays, strings, and vectors—understanding the trade-offs between fixed and dynamic structures.

3. **Control Flow:** Implemented conditional logic and loops, recognizing when to apply each construct and understanding their computational complexity.

4. **Modular Programming:** Learned to decompose problems into functions, applying the DRY principle and improving code maintainability.

5. **STL Power:** Experienced the efficiency gains from using standard library algorithms instead of reinventing wheels, demonstrating the value of generic programming.

6. **Object-Oriented Design:** Transitioned from procedural to OOP thinking, understanding encapsulation and the benefits of bundling data with behavior.

**Challenges Overcome:**
- Debugging type conversion issues and integer division truncation
- Managing input buffer state with mixed `cin` operations  
- Implementing efficient algorithms (erase-remove idiom, O(√n) prime checking)
- Designing clean class interfaces that hide implementation details

**Technical Growth:**
This exercise reinforced that programming is not just about syntax—it's about choosing appropriate data structures, understanding algorithmic complexity, writing maintainable code, and thinking in abstractions. The progression from "making it work" to "making it efficient and clean" reflects the mindset required for professional software development.

**Future Applications:**
These foundational concepts extend to advanced topics: templates enable generic programming, inheritance and polymorphism enable extensible designs, and understanding memory management prepares for systems programming. The principles learned here—encapsulation, modularity, algorithmic thinking—are language-agnostic and applicable across the software engineering discipline.

**Self-Assessment:**
Completing these exercises has built confidence in C++ fundamentals while revealing areas for deeper study (move semantics, smart pointers, template metaprogramming). The iterative process of coding, debugging, and refining has strengthened problem-solving skills and reinforced the importance of testing and validation.

---

**Total Programs Completed:** 10  
**Concepts Mastered:** Variables, I/O, Operators, Strings, Control Flow, Loops, Arrays, Functions, Vectors, STL, Classes, OOP  
**Lines of Code Written:** ~800+  
**Debugging Sessions:** Too many to count (but each one taught something valuable)

