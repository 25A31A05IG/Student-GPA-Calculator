# Student GPA Calculator (C Program)

## Introduction
The Student GPA Calculator is a C programming project that calculates a student's Grade Point Average (GPA) based on marks and credit hours. The program converts marks into grade points using a grading scale and computes the final GPA using a weighted average formula.

## Objective
To implement GPA calculation logic in C.
To understand weighted average computation.
To practice loops and conditional statements.
To analyze time and space complexity.

## Problem Statement
Given:
Number of subjects
Marks obtained in each subject
Credit hours of each subject
Compute the final GPA of the student.

## Formula Used
Where:
Grade point is assigned based on marks
Credit hours act as weight
Σ denotes summation

## Grading Scale
Marks
Grade Point
90 – 100
10
80 – 89
9
70 – 79
8
60 – 69
7
50 – 59
6
40 – 49
5
Below 40
0

## Intuition
GPA is not a simple average of marks.
Some subjects have higher importance (more credit hours).
So we calculate a weighted average:
Convert marks → grade points
Multiply grade point × credit hours
Add all weighted values
Divide by total credit hours
This ensures important subjects influence GPA more.

## Approach
Read number of subjects (n).
Initialize:
totalCredits = 0
totalPoints = 0
For each subject:
Input marks
Input credit hours
Convert marks to grade point using if-else
Add credit hours to totalCredits
Add (gradePoint × credit) to totalPoints
### Calculate:
GPA = totalPoints / totalCredits
Display final GPA.

## Method Used
Iterative method using for loop
Conditional statements (if-else)
Weighted average calculation
Basic arithmetic operations

## Time Complexity
Let n = number of subjects
Each subject is processed once.
### Time Complexity:O(n)
Because the program runs a single loop from 1 to n.

## Space Complexity
The program uses arrays to store:
Marks
Credit hours
### Space Complexity:O(n)
If optimized without arrays, it can be reduced to:
O(1)

## Sample Input & Output
Enter number of subjects: 3

Subject 1
Enter marks: 85
Enter credit hours: 4

Subject 2
Enter marks: 78
Enter credit hours: 3

Subject 3
Enter marks: 92
Enter credit hours: 3

Total Credits: 10.00
Final GPA: 8.70

## Conclusion
This project demonstrates:
Use of loops and conditionals
Weighted average calculation
Basic algorithm analysis
Practical implementation of GPA logic in C
