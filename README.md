# Undirected Graph Adjacency Matrix Checker (C)

## Project Description

This project is a **C program for working with undirected graphs using an adjacency matrix representation**.  
The main purpose of the program is to **verify whether a given adjacency matrix represents an undirected graph** by checking if the matrix is **symmetric**.

In graph theory, an undirected graph must satisfy the condition:

> Adjacency matrix A is symmetric  
> A[i][j] == A[j][i]

The program also measures the **computational time** required to perform the symmetry check, which makes it useful for **basic performance analysis on large graphs**.

---

## Features

- Represents a graph using an **adjacency matrix**
- Supports **large graph sizes** (up to 6000 × 6000)
- Checks whether the adjacency matrix is **symmetric**
- Determines if the graph is **undirected**
- Measures **execution time in milliseconds**
- Implemented in **standard C**

---

## Technologies Used

- **C Programming Language**
- Standard C Libraries:
  - `stdio.h`
  - `stdlib.h`
  - `math.h`
  - `time.h`

---

## Installation

### Requirements

- GCC or any standard C compiler
- Sufficient system memory (large 2D array allocation)

### Compilation

```bash
gcc Undirected_graph.c -o undirected_graph -lm
./undirected_graph
Matrix is symmetric
Computational time in millisecond = 12.45 ms


##Project Structure
.
├── Undirected_graph.c   # Main C source file
└── README.md            # Project documentation


##License
This project is open-source and intended for educational and learning purposes.
