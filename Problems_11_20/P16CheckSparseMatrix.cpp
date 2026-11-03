#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
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
bool is_sparse(int matrix[ROWS][COLS], int rows, int cols){
    return (count_number(matrix, rows, cols, 0) >= (rows * cols) / 2);
}
int main() {
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout <<"This is the matrix: " << endl;
    print_matrix(matrix, rows, cols);
    int number = count_number(matrix, rows, cols, 0);
    cout << "The number of " << 0 << " is " << number << endl;
    if (is_sparse(matrix, rows, cols)){
        cout <<"The matrix is sparce" << endl;
    }
    else{
        cout << "The matrix is not sparce" << endl;
    }
    return 0;
}

