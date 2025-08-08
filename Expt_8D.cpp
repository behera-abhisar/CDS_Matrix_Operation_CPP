#include <iostream>

using namespace std;

int main() {
    int row_1 = 0;
    int col_1 = 0;

    cout << "Enter the number of row(s) and column(s) for matrix 1 (separated by space): ";
    cin >> row_1 >> col_1;

    if(row_1 != col_1) {
        cout << "The number of rows and columns don't match for matrix diagonal addition" << endl;
        return 0;
    }

    int matrix_1[row_1][col_1];
    int diag_sum = 0;

    cout << endl;

    cout << "Enter the values for matrix 1\n";

    for(int i = 0; i < sizeof(matrix_1)/sizeof(matrix_1[0]); i++) {
        for(int j = 0; j < sizeof(matrix_1[0])/sizeof(matrix_1[0][0]); j++) {
            cout << "Enter the value of matrix[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> matrix_1[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row_1; i++) {
        diag_sum += matrix_1[i][i];
    }

    cout << "The sum of the diagonal elements is: " << diag_sum << endl;
    
    return 0;
}

/* Output

Enter the number of row(s) and column(s) for matrix 1 (separated by space): 3 3

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

The sum of the diagonal elements is: 15

*/
