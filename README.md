# Sudoku Solver

A Sudoku solver that takes a given 9x9 grid (where unknown cells are filled with 0) and automatically solves the puzzle. It can find all possible solutions, inform the user of the total number of solutions, and if the number of solutions is not too large (for example, less than 70), it displays all of them.

## Features

- **Complete Solver**: Automatically solves any valid 9x9 Sudoku puzzle
- **Multiple Solutions**: Finds all possible solutions for a given puzzle
- **Solution Count**: Reports the total number of solutions
- **Display Capability**: Shows all solutions when the count is manageable (< 70)

## Input Format

The solver accepts a 9x9 grid where:
- Known cells contain numbers 1-9
- Unknown cells are represented by `0`

## 🚀 Compilation

```bash
g++ -std=c++11 -O2 sudoku_solver.cpp -o sudoku_solver
./sudoku_solver
```

## Usage

```bash


Example input:
8 2 0 3 0 6 0 0 4
3 0 0 0 0 2 0 0 0
0 0 0 0 1 0 2 3 0
0 0 3 0 0 0 0 0 2
0 5 0 2 0 0 3 0 0
0 0 2 0 0 3 0 0 0
1 3 0 0 0 0 4 0 0
0 0 0 0 2 0 0 0 0
2 0 0 0 0 0 0 7 9

Example output:
8 2 1 3 5 6 7 9 4 
3 6 4 9 7 2 8 1 5 
5 7 9 4 1 8 2 3 6 
6 1 3 5 8 7 9 4 2 
7 5 8 2 4 9 3 6 1 
4 9 2 1 6 3 5 8 7 
1 3 7 6 9 5 4 2 8 
9 8 6 7 2 4 1 5 3 
2 4 5 8 3 1 6 7 9 

8 2 1 3 5 6 7 9 4 
3 6 9 4 7 2 8 1 5 
5 7 4 9 1 8 2 3 6 
6 1 3 5 8 7 9 4 2 
7 5 8 2 4 9 3 6 1 
4 9 2 1 6 3 5 8 7 
1 3 7 6 9 5 4 2 8 
9 8 6 7 2 4 1 5 3 
2 4 5 8 3 1 6 7 9 

8 2 1 3 5 6 7 9 4 
3 7 4 9 8 2 5 6 1 
9 6 5 4 1 7 2 3 8 
6 8 3 5 7 9 1 4 2 
7 5 9 2 4 1 3 8 6 
4 1 2 8 6 3 9 5 7 
1 3 7 6 9 8 4 2 5 
5 9 6 7 2 4 8 1 3 
2 4 8 1 3 5 6 7 9 

8 2 1 3 5 6 7 9 4 
3 7 4 9 8 2 5 6 1 
9 6 5 4 1 7 2 3 8 
6 8 3 5 7 9 1 4 2 
7 5 9 2 4 1 3 8 6 
4 1 2 8 6 3 9 5 7 
1 3 7 6 9 8 4 2 5 
5 9 8 7 2 4 6 1 3 
2 4 6 1 3 5 8 7 9 

8 2 1 3 5 6 7 9 4 
3 9 4 7 8 2 5 6 1 
7 6 5 4 1 9 2 3 8 
6 8 3 5 9 7 1 4 2 
9 5 7 2 4 1 3 8 6 
4 1 2 8 6 3 9 5 7 
1 3 9 6 7 8 4 2 5 
5 7 6 9 2 4 8 1 3 
2 4 8 1 3 5 6 7 9 

8 2 1 3 5 6 7 9 4 
3 9 4 7 8 2 5 6 1 
7 6 5 4 1 9 2 3 8 
6 8 3 5 9 7 1 4 2 
9 5 7 2 4 1 3 8 6 
4 1 2 8 6 3 9 5 7 
1 3 9 6 7 8 4 2 5 
5 7 8 9 2 4 6 1 3 
2 4 6 1 3 5 8 7 9 

8 2 1 3 5 6 7 9 4 
3 7 4 9 8 2 5 6 1 
9 6 5 4 1 7 2 3 8 
7 8 3 5 6 9 1 4 2 
6 5 9 2 4 1 3 8 7 
4 1 2 8 7 3 9 5 6 
1 3 6 7 9 8 4 2 5 
5 9 7 6 2 4 8 1 3 
2 4 8 1 3 5 6 7 9 

8 2 1 3 7 6 9 5 4 
3 4 6 9 5 2 1 8 7 
9 7 5 4 1 8 2 3 6 
4 8 3 1 9 5 7 6 2 
6 5 9 2 8 7 3 4 1 
7 1 2 6 4 3 8 9 5 
1 3 7 5 6 9 4 2 8 
5 9 8 7 2 4 6 1 3 
2 6 4 8 3 1 5 7 9 

There are 8 different solution(s).
