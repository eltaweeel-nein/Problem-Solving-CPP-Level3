#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

int generate_random_number(int from, int to) {
    return rand() % (to - from + 1) + from;
}
void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            matrix[row][col] = generate_random_number(111, 130);
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
int min_number(int matrix[ROWS][COLS], int rows, int cols) {
    int min_val = matrix[0][0];
    for (int row= 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (min_val > matrix[row][col]) {
                min_val = matrix[row][col];
            }
        }
    }
    return min_val;
}

int max_number(int matrix[ROWS][COLS], int rows, int cols) {
    int maxi_number = matrix[0][0];
    for (int row= 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (maxi_number < matrix[row][col]) {
                maxi_number = matrix[row][col];
            }
        }
    }
    return maxi_number;
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
    int mini_number = min_number(matrix, rows, cols);
    int maxi_number = max_number(matrix, rows, cols);
    cout <<"The mini number in the matrix is " << mini_number << endl;
    cout <<"The max number in the matrix is " << maxi_number << endl;
    return 0;
}