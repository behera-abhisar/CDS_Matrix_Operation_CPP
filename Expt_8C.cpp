#include <iostream>

using namespace std;

int main() {
    int row_1 = 0, col_1 = 0;
    int row_2 = 0, col_2 = 0;

    cout << "Enter the number of row(s) and column(s) for matrix 1 (separated by space): ";
    cin >> row_1 >> col_1;

    cout << "Enter the number of row(s) and column(s) for matrix 2 (separated by space): ";
    cin >> row_2 >> col_2;

    if(row_1 != row_2 || col_1 != col_2) {
        cout << "The number of rows and colums don't match for matrix multiplication" << endl;
        return 0;
    }

    int matrix_1[row_1][col_1];
    int matrix_2[row_2][col_2];
    int mul_matrix[row_1][col_2];

    cout << endl;

    cout << "Enter the values for matrix 1\n";

    for(int i = 0; i < sizeof(matrix_1)/sizeof(matrix_1[0]); i++) {
        for(int j = 0; j < sizeof(matrix_1[0])/sizeof(matrix_1[0][0]); j++) {
            cout << "Enter the value of matrix[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> matrix_1[i][j];
        }
        cout << endl;
    }

    cout << "Enter the values for matrix 2\n";

    for(int i = 0; i < sizeof(matrix_2)/sizeof(matrix_2[0]); i++) {
        for(int j = 0; j < sizeof(matrix_2[0])/sizeof(matrix_2[0][0]); j++) {
            cout << "Enter the value of matrix[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> matrix_2[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_2; j++) {
            mul_matrix[i][j] = 0;
            for(int k = 0; k < row_1; k++) {
                mul_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }

    cout << "The multiplication of matrix 1 and matrix 2\n";

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            cout << mul_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}

/* Output

Enter the number of row(s) and column(s) for matrix 1 (separated by space): 3 3
Enter the number of row(s) and column(s) for matrix 2 (separated by space): 3 3

Enter the values for matrix 1
Enter the value of matrix[1][1]: 1
Enter the value of matrix[1][2]: 2
Enter the value of matrix[1][3]: 3

Enter the value of matrix[2][1]: 4
Enter the value of matrix[2][2]: 5
Enter the value of matrix[2][3]: 6

Enter the value of matrix[3][1]: 7
Enter the value of matrix[3][2]: 8
Enter the value of matrix[3][3]: 9

Enter the values for matrix 2
Enter the value of matrix[1][1]: 1
Enter the value of matrix[1][2]: 1
Enter the value of matrix[1][3]: 1

Enter the value of matrix[2][1]: 2
Enter the value of matrix[2][2]: 2
Enter the value of matrix[2][3]: 2

Enter the value of matrix[3][1]: 3
Enter the value of matrix[3][2]: 3
Enter the value of matrix[3][3]: 3

The multiplication of matrix 1 and matrix 2
14      14      14
32      32      32
50      50      50

*/
