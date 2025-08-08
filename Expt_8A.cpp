#include <iostream>

using namespace std;

int main() {
    int matrix[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the value of matrix[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    cout << "The matrix is\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

/* Output

Enter the value of matrix[1][1]: 1
Enter the value of matrix[1][2]: 2
Enter the value of matrix[1][3]: 4

Enter the value of matrix[2][1]: 1
Enter the value of matrix[2][2]: 2
Enter the value of matrix[2][3]: 3

Enter the value of matrix[3][1]: 4
Enter the value of matrix[3][2]: 5
Enter the value of matrix[3][3]: 6

The matrix is
1       2       4
1       2       3
4       5       6

*/
