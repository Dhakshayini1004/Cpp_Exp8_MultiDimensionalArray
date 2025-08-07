# C++ Experiment 8: To study and implement C++ 2D Array – Matrices

---

## Aim  
To:  
1. Understand and implement multidimensional arrays in C++.  
2. Perform operations such as input, display, addition, multiplication, transpose, and diagonal sum of matrices.  
3. Explore the application of matrices in computational and real-world scenarios.

---

## Tool Used  
VS Code

---

## Objectives  
- To learn the declaration and usage of multidimensional arrays.  
- To accept and process user input for 2D arrays (matrices).  
- To implement operations such as matrix addition, multiplication, diagonal sum, and transpose.  
- To verify compatibility conditions (like matrix order) before performing operations.  
- To simulate mathematical matrix logic in C++ for real-life data structures.

---

## Theory

### What are Multidimensional Arrays?  
A multidimensional array is an array of arrays. The most common form is the 2D array, used to represent matrices or tables with rows and columns.

**Syntax:**  
```cpp
datatype arrayName[rows][columns];
```

### Accessing Elements  
Elements are accessed using two indices:  
```cpp
array[i][j]; // i = row index, j = column index
```

### Real-Life and Industrial Applications  
- Image Processing: Each pixel in an image is stored as matrix elements.  
- Scientific Simulations: Multidimensional arrays model physical systems or simulations.  
- Game Development: Game boards, tile maps, and level design use 2D arrays.  
- Finance: Used in Excel-like data modeling for profits, expenses, inventory.  
- Embedded Systems: Store sensor data in structured rows and columns.  
- Machine Learning: Datasets and matrices are core to training algorithms.  
- Control Systems: Used for matrix operations in robotics, automation, and signal processing.

---

## Program Descriptions

### 1. Matrix Addition Program  
- Accepts two matrices `matrix1` and `matrix2` of size `m1 × n1` and `m2 × n2`.  
- Validates if the matrices are of the same size.  
- Takes input for each element of both matrices.  
- Displays both matrices after input.  
- Performs element-wise addition and stores in a third matrix `sum`.  
- Prints the resulting matrix of the addition.

---

### 2. Diagonal Sum of a Square Matrix  
- Accepts a square matrix of size `m × m` (user enters one dimension only).  
- Validates that diagonal logic is applied only to square matrices.  
- Takes input for each element.  
- Displays the original matrix.  
- Calculates the sum of:  
  - Primary diagonal (from top-left to bottom-right).  
  - Secondary diagonal (from top-right to bottom-left).  
- Displays the individual sums of both diagonals.

---

### 3. Matrix Multiplication Program  
- Accepts two matrices `matrix1` (`m1 × n1`) and `matrix2` (`m2 × n2`).  
- Checks if multiplication is possible (only if `n1 == m2`).  
- Takes element-wise input for both matrices.  
- Displays the matrices.  
- Computes matrix multiplication using nested loops and stores in `Prod[m1][n2]`.  
- Prints the final matrix result after multiplication.  

> Note: The multiplication logic in this version had an error (`+` used instead of `*`). Ideal implementation should be:  
```cpp
Prod[i][j] += matrix1[i][k] * matrix2[k][j];
```

---

### 4. Matrix Input and Display Program  
- Takes user-defined dimensions for a matrix `m × n`.  
- Accepts all elements of the matrix from the user.  
- Displays the matrix in tabular format.  
- Demonstrates basic input and output handling of 2D arrays.

---

### 5. Transpose of a Matrix  
- Accepts a matrix `matrix[m][n]`.  
- Takes input for all elements.  
- Displays the original matrix.  
- Computes and displays the transpose of the matrix by switching rows and columns.  
- The transposed matrix is `matrix[j][i]`.

---

## Concepts Used  
- Declaration of 2D arrays with dynamic size.  
- Nested loops for row-column traversal.  
- Conditional checks for matrix operation validity.  
- Matrix addition logic (element-wise sum).  
- Matrix multiplication using dot product of rows and columns.  
- Transpose by interchanging `matrix[i][j]` with `matrix[j][i]`.  
- Diagonal logic using index conditions (`i == j`, `i + j == n - 1`).  
- Use of `printf()` and `cin`/`cout` for mixed input-output styling.



## Sample output: 
1. Printing Multi-dimensional Array elements :
```
Enter number of rows and columns :
3
2
Enter the element[0][0] :
33
Enter the element[0][1] :
44
Enter the element[1][0] :
55
Enter the element[1][1] :
66
Enter the element[2][0] :
77
Enter the element[2][1] :
88
33	44	
55	66	
77	88

```
2. Transpose of a Matrix:
```
Enter number of rows and columns :
3
3
Enter the element of Matrix1[0][0] :
2
Enter the element of Matrix1[0][1] :
3
Enter the element of Matrix1[0][2] :
4
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
5
Enter the element of Matrix1[1][2] :
4
Enter the element of Matrix1[2][0] :
7
Enter the element of Matrix1[2][1] :
6
Enter the element of Matrix1[2][2] :
8
Matrix 1
2	3	4	
3	5	4	
7	6	8	
Transpose
2	3	7	
3	5	6	
4	4	8

```
3. Sum of Diagonal ELements of a Matrix :
```
Enter number of rows and columns :
3
3
Enter the element of Matrix1[0][0] :
4
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[0][2] :
55
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
2
Enter the element of Matrix1[1][2] :
6
Enter the element of Matrix1[2][0] :
2
Enter the element of Matrix1[2][1] :
6
Enter the element of Matrix1[2][2] :
2
Matrix 1
4	2	55	
3	2	6	
2	6	2	
Diagonal 1 Sum :8
Diagonal 2 Sum :59

```
4. Sum of Matrices :
```
Enter number of rows and columns :
2
2
Enter number of rows and columns :
2
2
Enter the element of Matrix1[0][0] :
2
Enter the element of Matrix1[0][1] :
3
Enter the element of Matrix1[1][0] :
2
Enter the element of Matrix1[1][1] :
3
Enter the element of Matrix2[0][0] :
3
Enter the element of Matrix2[0][1] :
4
Enter the element of Matrix2[1][0] :
3
Enter the element of Matrix2[1][1] :
4
Matrix 1
2	3	
2	3	
Matrix 2
3	4	
3	4	
Sum
5	7	
5	7	

```
5. Mutiplication of Matrices
```
Enter number of rows and columns :
2
2
Enter number of rows and columns :
2
2
Enter the element of Matrix1[0][0] :
2
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[1][0] :
2
Enter the element of Matrix1[1][1] :
2
Enter the element of Matrix2[0][0] :
2
Enter the element of Matrix2[0][1] :
2
Enter the element of Matrix2[1][0] :
2
Enter the element of Matrix2[1][1] :
2
Matrix 1
2	2	
2	2	
Matrix 2
2	2	
2	2	
Multiplication
8	8	
8	8

```
