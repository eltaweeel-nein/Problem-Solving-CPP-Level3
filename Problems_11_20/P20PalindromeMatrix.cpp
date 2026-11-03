#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

int generate_random_number(int from, int to) {
    return rand() % (to - from + 1) + from;
}
void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            matrix[row][col] = generate_random_number(3, 5);
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
bool is_palindrome(int matrix[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols / 2; col++) {
            if (matrix[row][col] != matrix[row][cols-1-col]) {
                return false;
            }
        }
    }
    return true;
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout <<"This is the matrix: " << endl;
    print_matrix(matrix, rows, cols);
    cout << endl;
    if (is_palindrome(matrix, rows, cols)) {
        cout <<"This is a palindrome matrix" << endl;
    }
    else {
        cout << "This is not a palindrome matrix" << endl;
    }
    return 0;
}