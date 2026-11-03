#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int const ROWS = 3;
int const COLS = 3;

int generate_random_number(int from, int to) {
    return rand() % (to - from + 1) + from;
}
void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            matrix[row][col] = generate_random_number(0,1);
        }
    }
}
void print_matrix(int matrix[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << setw(3) << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}
int count_number(int matrix[ROWS][COLS], int rows, int cols, int number) {
    int counter =0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (matrix[row][col] == number) {
                counter++;
            }
        }
    }
    return counter;
}
int main() {
    int matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout <<"This is the matrix: " << endl;
    print_matrix(matrix, rows, cols);
    int number;
    cout << "Please enter a number to count in the matrix: " << endl;
    cin >> number;
    cout << "The number " << number << " count in matrix is " << count_number(matrix, rows, cols, number) << endl;
    return 0;
}

