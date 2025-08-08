#include <iostream>

using namespace std;

int main() {
    int row_1 = 0, col_1 = 0;

    cout << "Enter the number of row(s) and column(s) for matrix 1 (separated by space): ";
    cin >> row_1 >> col_1;

    if (row_1 < 2) {
        cout << "Matrix must have at least 2 rows to compare first and second rows" << endl;
        return 0;
    }

    int matrix_1[row_1][col_1];
    int transpose_matrix[col_1][row_1];

    cout << endl;

    cout << "Enter the values for matrix 1\n";

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            cout << "Enter the value of matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix_1[i][j];
        }
        cout << endl;
    }

    cout << "Comparison of first and second rows of the matrix:\n";
    for(int j = 0; j < col_1; j++) {
        if (matrix_1[0][j] == matrix_1[1][j]) {
            cout << "matrix[1][" << j + 1 << "] is equal to matrix[2][" << j + 1 << "]: "
                 << matrix_1[0][j] << " == " << matrix_1[1][j] << endl;
        } else {
            cout << "matrix[1][" << j + 1 << "] is NOT equal to matrix[2][" << j + 1 << "]: "
                 << matrix_1[0][j] << " != " << matrix_1[1][j] << endl;
        }
    }

    return 0;
}

/* Output

Enter the number of row(s) and column(s) for matrix 1 (separated by space): 3 3

Enter the values for matrix 1
Enter the value of matrix[1][1]: 1
Enter the value of matrix[1][2]: 2
Enter the value of matrix[1][3]: 1

Enter the value of matrix[2][1]: 1
Enter the value of matrix[2][2]: 2
Enter the value of matrix[2][3]: 1

Enter the value of matrix[3][1]: 3
Enter the value of matrix[3][2]: 4
Enter the value of matrix[3][3]: 5

Comparison of first and second rows of the matrix:
matrix[1][1] is equal to matrix[2][1]: 1 == 1
matrix[1][2] is equal to matrix[2][2]: 2 == 2
matrix[1][3] is equal to matrix[2][3]: 1 == 1

*/
