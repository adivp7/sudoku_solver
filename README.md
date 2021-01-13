# sudoku_solver
This project is a simple 9x9 sudoku solver program in C++ using recursion.

To run this project:-
Note:	The source file comes with an empty sudoku grid already set in the code for testing. If you choose to enter your own sudoku, uncomment lines 59 to 61 and recompile.

Compile sudoku.cpp or run sudoku.exe from command prompt
If you're entering a custom sudoku, enter a line of nine digits seperated by spaces, with 0 for empty. Enter nine such lines.
  e.g.	0 0 0 0 6 0 0 0 0
       	0 3 4 8 9 0 7 0 1
       	.
	.
	.
If a solution is found, it will be displayed, else "no solution" will be shown.

The program makes use of recursion at each cell of the grid to determine a correct solution for the entire grid. For each cell, if it is 0 (empty), numbers 1 to 9 are checked. If the check is passed, the function is then called recursively for each subsequent cell. If the check fails, the number is incremented and checked again. If all of the numbers fail the check, no solution is possible.

- Aditya Painuly, B. Tech (CSE), GEHU
