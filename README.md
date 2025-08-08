# EXPERIMENT 08: MATRIX OPERATIONS IN C++

## AIM
To understand and implement basic matrix operations in C++ such as addition, multiplication, diagonal addition, transpose, and comparison using two-dimensional arrays.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

### MATRICES
A **matrix** is a two-dimensional array of elements arranged in rows and columns. In C++, matrices can be implemented using 2D arrays. Matrix operations are essential in fields like mathematics, physics, computer graphics, and data science.

#### Syntax:
```cpp
datatype matrixName[rows][columns];
```

## EXPERIMENT 08(A): INPUT AND OUTPUT OF MATRIX ELEMENTS USING NESTED FOR LOOP IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** a 2D integer array `matrix` of size `3x3`.
3. **Use a nested for loop** to iterate through each row `i` and column `j` (from `0` to `2`):
   - In each iteration, prompt the user to **enter the value** for `matrix[i][j]`.
   - **Store** the input in the corresponding position in the matrix.
4. **Print** a message indicating the matrix will be displayed.
5. **Use another nested for loop** to iterate through each row `i` and column `j` (from `0` to `2`):
   - **Print** the value at `matrix[i][j]` followed by a tab (`\t`).
   - After each row, print a newline to format the output as a matrix.
6. **End** the program.

## EXPERIMENT 08(B): MATRIX ADDITION IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** four integer variables: `row_1`, `col_1`, `row_2`, and `col_2` to store the dimensions of the matrices.
3. **Prompt** the user to enter the number of rows and columns for matrix 1, and **store** the values in `row_1` and `col_1`.
4. **Prompt** the user to enter the number of rows and columns for matrix 2, and **store** the values in `row_2` and `col_2`.
5. **Check** if `row_1` is equal to `row_2` and `col_1` is equal to `col_2`:
   - If not equal, **display** an error message and **terminate** the program.
6. **Declare** three 2D arrays: `matrix_1[row_1][col_1]`, `matrix_2[row_2][col_2]`, and `sum_matrix[row_1][col_2]`.
7. **Use nested for loops** to iterate over the rows and columns of `matrix_1`:
   - **Prompt** the user to input each element and **store** the value in `matrix_1[i][j]`.
8. **Use nested for loops** to input the values of `matrix_2` in the same manner.
9. **Use nested for loops** to add the corresponding elements of `matrix_1` and `matrix_2`, and **store** the result in `sum_matrix[i][j]`.
10. **Display** the resulting `sum_matrix` using nested for loops.
11. **End** the program.

## EXPERIMENT 08(C): MATRIX MULTIPLICATION IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** four integer variables: `row_1`, `col_1`, `row_2`, and `col_2` to store the dimensions of the matrices.
3. **Prompt** the user to enter the number of rows and columns for matrix 1, and **store** the values in `row_1` and `col_1`.
4. **Prompt** the user to enter the number of rows and columns for matrix 2, and **store** the values in `row_2` and `col_2`.
5. **Check** if `row_1` is equal to `row_2` and `col_1` is equal to `col_2` (square matrices check for simplified multiplication):
   - If not equal, **display** an error message and **terminate** the program.
6. **Declare** three 2D arrays: `matrix_1[row_1][col_1]`, `matrix_2[row_2][col_2]`, and `mul_matrix[row_1][col_2]`.
7. **Use nested for loops** to input values for `matrix_1` from the user.
8. **Use nested for loops** to input values for `matrix_2` from the user.
9. **Use three nested for loops** to perform matrix multiplication:
   - Initialize `mul_matrix[i][j]` to 0.
   - Multiply corresponding elements of the row of `matrix_1` and column of `matrix_2` and add them to `mul_matrix[i][j]`.
10. **Display** the resulting `mul_matrix` using nested for loops.
11. **End** the program.

## EXPERIMENT 08(D): MATRIX DIAGONAL ADDITION IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** two integer variables `row_1` and `col_1` to store the number of rows and columns of the matrix.
3. **Prompt** the user to enter the number of rows and columns and **store** the input in `row_1` and `col_1`.
4. **Check** if the matrix is a square matrix by comparing `row_1` and `col_1`:
   - If they are not equal, **display** an error message and **terminate** the program.
5. **Declare** a 2D integer array `matrix_1[row_1][col_1]` and an integer variable `diag_sum` initialized to 0.
6. **Use nested for loops** to iterate through the rows and columns:
   - In each iteration, **prompt** the user to input an element for `matrix_1[i][j]`.
   - **Store** the value in the corresponding position of the matrix.
7. **Use a single for loop** to iterate over the diagonal elements of the matrix (i.e., where row index equals column index):
   - **Add** each diagonal element `matrix_1[i][i]` to `diag_sum`.
8. **Display** the value of `diag_sum`, which is the sum of the diagonal elements.
9. **End** the program.

## EXPERIMENT 08(E): MATRIX TRANSPOSE IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** two integer variables `row_1` and `col_1` to store the number of rows and columns of the matrix.
3. **Prompt** the user to enter the number of rows and columns and **store** the input in `row_1` and `col_1`.
4. **Declare** a 2D integer array `matrix_1[row_1][col_1]` to store the matrix elements.
5. **Declare** another 2D integer array `transpose_matrix[col_1][row_1]` to store the transpose of the matrix.
6. **Use nested for loops** to iterate through the rows and columns of `matrix_1`:
   - In each iteration, **prompt** the user to input an element.
   - **Store** the input in `matrix_1[i][j]`.
7. **Use nested for loops** to compute the transpose of the matrix:
   - For each element `matrix_1[i][j]`, assign its value to `transpose_matrix[j][i]`.
8. **Display** the transpose matrix by iterating over `transpose_matrix` using nested for loops.
9. **End** the program.

## EXPERIMENT 08(F): COMPARISON OF FIRST AND SECOND ROWS OF A MATRIX IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** two integer variables `row_1` and `col_1` to store the number of rows and columns of the matrix.
3. **Prompt** the user to enter the number of rows and columns and **store** them in `row_1` and `col_1`.
4. **Check** if `row_1` is less than 2:
   - If yes, display an error message indicating that at least 2 rows are required and **terminate** the program.
5. **Declare** a 2D integer array `matrix_1[row_1][col_1]` to store the matrix elements.
6. **Use nested for loops** to input elements into the matrix:
   - For each row `i` from 0 to `row_1 - 1`:
     - For each column `j` from 0 to `col_1 - 1`:
       - Prompt the user to enter the value of `matrix_1[i][j]`.
7. **Compare** the elements of the first row (`matrix_1[0][j]`) and the second row (`matrix_1[1][j]`) for each column `j` from 0 to `col_1 - 1`:
   - If the elements are equal, print a message indicating equality.
   - Otherwise, print a message indicating inequality.
8. **End** the program.

## CONCLUSION

In this experiment, I learned how to work with matrices in C++, specifically how to input matrix elements and compare corresponding elements of the first and second rows. This helped me understand the use of two-dimensional arrays, nested loops, and conditional statements for element-wise comparison. Such operations are fundamental in matrix processing and form the basis for more complex matrix manipulations in programming.
