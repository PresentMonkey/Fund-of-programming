# Exam 1

## True/False

1. A preprocessor directive does not require a `;` at the end

2. Pseudocode is a form of program statement that will always evaluate to false

3. C++ requires that you give variable names that indicate what the variables are used for

4. Machine language is an example of a high level language

5. Arithmetic operators that share the same precedence have right to left associativity

6. C++ does not have a built in data type for storing strings of data

7. Escape sequences are always stored internally as a single character

8. In programming the terms `line` and `statement` always mean the same thing

9. A CPU really only understands instructions that are written in machine language

10. The `cin` will stop reading input when in encounters a newline character

11. A variable called `average` should be declared as an integer datatype because it will probably contain data with decimal places

12. Floating points constants are normally stored in memory as `doubles`

13. The preprocessor execute after the compiler

14. In C++, keywords are written in all lowercase letter

15. If you want to length of string that is stored as a string object, you call the object's `size()` member function

16. If you do not follow a consistent programming style, your programs will generate compiler errors.
    * False

17. When typing in your source code, you must be very careful since most of your C++ instructions are case sensitive.
    * True
18. Software engineering is a field that incorporates, designing, writing, testing, debugging, documenting, modifying, and maintaining computer programs. 

19. When the `fixed` manipulator is used, the values specified by the `setprecision()` modifier, 

20. The only difference between the `get()` function and the insertion operator is that `get` reads the first character time even if it's whitespace.
    * True

## Multiple Choice

1. The CPU's job is _

2. __ are used to translate each source code instruction into the appropriate machine language instruction

3. The computer's main memory is commonly known as __

4. The __ causes the contents of another file to be inserted

5. The statement that starts with `#` is called a __

6. You must have a __ for every variable 

7. These are the data items that do not change while the program is running

8. In memory C++ automatically places a __ at the end of a string literal

9. When this operator with string operands it concats them or joins them together

10. The function `pow(x, 5.0)` requires what header file?

11. This manipulator is used to establish a field width for the value immediately following

12. You can these to override the rules of operator precedence in a mathematical expression
    * Parentheses 
13. This manipulator causes the field to left justified with padding spaces printed to the right

14. What does the term hardware refer to?

15. An IDE typical consists of?

16. The __ decodes an instruction and generates electrical signals

17. A __ is a set of a instructions to solve a problem

18. The purpose of a memory address is

19. Which of the following best describes an operator

20. Program defined names of memory locations that may hold data are
    * Variables
21. Characters or symbols that perform operations on one or more operands are

22. The programming process consists of several steps, which include: 

23. In a C++ program `//` indicate what?

24. The __ is or are used to display information on the computer screen

25. For every opening brace `[` in a C++ program there must be a 
    * `]` Closing brace
26. Besides decimal 2 other numbering systems you might encounter are
    * Hexadecimal??
27. __ represents storage locations in a computer's memory

28. The numeric data types can be broken into which 2 general categories

29. Of the following, which is a valid C++ identifier

30. __ reads in a line of input including leading and embedded spaces and stores it in a string object

31. A __ blank causes a program to wait until information is typed at the keyboard and the enter key is pressed

32. This function tells `cin` to skip one or more character in the keyboard buffer

33. When the final value of a expression is assigned to a variable it will be converted to

34. When a variable is assigned a number that is too large for it's datatype it __

35. A character literal is enclosed in __ quotation marks, while a string literal is enclosed in __ quotation marks
    * `'`, `"`
36. The __ operator always the `cin` object, while the __ operator follows the `cout` object

37. In any program that includes the `cin` object you must must include what

38. What is the value stored at `x` given the statement:

39. You want the user to enter multiple variables, which `cin` statement is correctly written

40. In the following C++ statement, which will be executed first according to the order of precedence

## Problems/Short Essay

1. Name the 3 basic structures or constructs used to design program logic, give examples using psudocode
    * Sequential: `x=0`
    * Conditional/Decision:
    ```
    if(x>100) then
        print "HIGH"
    else
        print "LOW"
    endif
    ```
    * Iteratve/Loop:
    ```
    count = 1
    while(count <= 20) DO
        print "yes"
        count = count + 1
    endwhile
    ```

2. Name and describe the 4 phases of application development
    1. Requirement
    2. Design
    3. Coding
    4. Testing

3. Write a `cin` statement for the following values
    * Example: 
    ```cpp
    int joe;
    cin >> joe;
    ```
4. Division problem with `float`.
    * Be aware of data types

5. Write an program in C++, implement `cin` and `cout` statement


