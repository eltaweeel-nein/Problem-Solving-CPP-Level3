#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
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
            matrix[row][col] = generate_random_number(1,100);
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
bool check_typical(int matrix[ROWS][COLS],int matrix2[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (matrix[row][col] != matrix2[row][col]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    fill_matrix_with_random_numbers(matrix2, rows, cols);
    cout <<"This is the first matrix: " << endl;
    print_matrix(matrix, rows, cols);
    cout << endl;
    cout << "This is the second matrix: " << endl;
    print_matrix(matrix2, rows, cols);
    if (check_typical(matrix, matrix2, rows, cols)) {
        cout <<"The matrix is typical" << endl;
    }
    else {
        cout <<"The matrix is not typical" << endl;
    }
    return 0;
}