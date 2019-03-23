# Tower-of-Hanoi-C-

Tower of Hanoi is a puzzle game which consists of three towers, and a number of disks of different sizes which can slide onto any tower. 
The puzzle starts with the disks in a neat stack in ascending order of size on one tower, the smallest at the top, thus making a conical 
shape. The goal is to move the entire stack to another tower, obeying the following rules:
  - Only one disk can be moved at a time
  - Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack
  - Larger disks cannot be placed on top of smaller disks 

I wrote a program to let the user play the game. They can choose the number of disks they want and can choose between 3 or 4 towers.
The disks will be represented using numbers (the larger the number, the larger the disk), and the towers will be represented using letters
A, B, C, D. After they complete the game, the number of moves done will be shown and they can choose to see the optimal solution or not.

For the optimal solution, I wrote a code to solve the game with the minimum number of steps possible (n disks with 3 or 4 towers) using 
recursion. It will display each step that the user must do in order to complete the game (put which disk to which tower).
