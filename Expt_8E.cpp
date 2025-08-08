#include <iostream>

using namespace std;

int main() {
    int row_1 = 0, col_1 = 0;

    cout << "Enter the number of row(s) and column(s) for matrix 1 (separated by space): ";
    cin >> row_1 >> col_1;

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

    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            transpose_matrix[j][i] = matrix_1[i][j];
        }
    }

    cout << "The transpose of matrix 1:\n";
    for(int i = 0; i < col_1; i++) {
        for(int j = 0; j < row_1; j++) {
            cout << transpose_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

/* Output

Enter the number of row(s) and column(s) for matrix 1 (separated by space): 2 2

Enter the values for matrix 1
Enter the value of matrix[1][1]: 1
Enter the value of matrix[1][2]: 2

Enter the value of matrix[2][1]: 3
Enter the value of matrix[2][2]: 4

The transpose of matrix 1:
1       3
2       4

*/
