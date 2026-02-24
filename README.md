[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/XpLxuBD8)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=22830934&assignment_repo_type=AssignmentRepo)
# Recursion Usecases
Week 6 Mon Lab

This lab consists of two parts.

### Part A ###

## Directions

For the first part of the lab activity, you are going to implement a recursive solution to finding a maximum through the tail method discussed in lecture. The `main` function has already been written for you to run test cases. The output from your function needs to match with the fixed output.

The `findMaxRecTail` function has 3 parameters:

1. `arr` - a constant array containing the elements
2. `SIZE` - a constant integer that holds the number of elements in `arr`
3. `i` - an integer that represents the current position of the "head" of `arr`, with a default value of 0

To continue practicing how to analyze code, you are suggested to perform a time complexity analysis. You can do so as a comment block above the function.

Similarly implement `findMaxRecBinarySplit` function. This function takes 3 parameters

1. `arr` - a constant array containing the elements
2. `left` - integer that holds the index of leftmost element of `arr`
3. `right` - integer that holds the index of rightmost element of `arr`

# Part B

## Directions

For the second part of the lab activity, you are going to implement a recursive function to solve the Tower of Hanoi problem. The `main` function has already been written for you to run the first 5 cases.

Your implementation should display a message when it "moves" a disk from the source rod to the target rod. Use the format below, replacing `i`, `x`, and `y` with actual values:
```text
Moving disc i from rod #x to rod #y
```

The `towerHanoi` procedure has 5 parameters:

1. `numDisks` - an integer that represents the number of disks
2. `source` - a string that names the source rod
3. `buffer` - a string that names the buffer rod
4. `target` - a string that names the target rod
5. `numMoves` - a reference to an integer that holds the number of moves made so far

To continue practicing how to analyze code, you are suggested to perform a time complexity analysis. You can do so as a comment block above the function.

## Sample Run

If you implemented the function correctly, you should get the following output from the program:

```text
----------------------------------------
Trying n = 1

Moving disc 1 from Rod #1 to Rod #3

Number of Moves = 1
----------------------------------------
Trying n = 2

Moving disc 1 from Rod #1 to Rod #2
Moving disc 2 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #3

Number of Moves = 3
----------------------------------------
Trying n = 3

Moving disc 1 from Rod #1 to Rod #3
Moving disc 2 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #2
Moving disc 3 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #1
Moving disc 2 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #3

Number of Moves = 7
----------------------------------------
Trying n = 4

Moving disc 1 from Rod #1 to Rod #2
Moving disc 2 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #3
Moving disc 3 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #1
Moving disc 2 from Rod #3 to Rod #2
Moving disc 1 from Rod #1 to Rod #2
Moving disc 4 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #3
Moving disc 2 from Rod #2 to Rod #1
Moving disc 1 from Rod #3 to Rod #1
Moving disc 3 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #2
Moving disc 2 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #3

Number of Moves = 15
----------------------------------------
Trying n = 5

Moving disc 1 from Rod #1 to Rod #3
Moving disc 2 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #2
Moving disc 3 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #1
Moving disc 2 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #3
Moving disc 4 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #2
Moving disc 2 from Rod #3 to Rod #1
Moving disc 1 from Rod #2 to Rod #1
Moving disc 3 from Rod #3 to Rod #2
Moving disc 1 from Rod #1 to Rod #3
Moving disc 2 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #2
Moving disc 5 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #1
Moving disc 2 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #3
Moving disc 3 from Rod #2 to Rod #1
Moving disc 1 from Rod #3 to Rod #2
Moving disc 2 from Rod #3 to Rod #1
Moving disc 1 from Rod #2 to Rod #1
Moving disc 4 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #3
Moving disc 2 from Rod #1 to Rod #2
Moving disc 1 from Rod #3 to Rod #2
Moving disc 3 from Rod #1 to Rod #3
Moving disc 1 from Rod #2 to Rod #1
Moving disc 2 from Rod #2 to Rod #3
Moving disc 1 from Rod #1 to Rod #3

Number of Moves = 31
```

