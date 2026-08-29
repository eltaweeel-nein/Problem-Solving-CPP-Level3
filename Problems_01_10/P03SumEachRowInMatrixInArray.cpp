#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const short ROWS = 3;
const short COLS = 3;

int generate_random_number(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            matrix[i][j] = generate_random_number(1, 100);
        }
    }
}

void print_matrix(int matrix[ROWS][COLS], short rows, short cols) {
    for (short row = 0; row < rows; row++) {
        for (short col = 0; col < cols; col++) {
            cout << setw(3) << matrix[row][col] << "     ";
        }
        cout << endl;
    }
}

int row_sum(int matrix[ROWS][COLS], short row_number, short cols) {
    int sum = 0;
    for (short counter = 0; counter < cols; counter++) {
        sum += matrix[row_number][counter];
    }
    return sum;
}

void sum_matrix_row_in_array(int matrix[ROWS][COLS], int matrix_sum[ROWS], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        matrix_sum[i] = row_sum(matrix, i, cols);
    }
}

void print_rows_sum_array(int matrix_sum[ROWS], short rows) {
    cout << "\nThe following are the sums of each row in the matrix:\n";
    for (short i = 0; i < rows; i++) {
        cout << "Row " << i + 1 << " Sum = " << matrix_sum[i] << endl;
    }
}

int main() {
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int arr_rows_sum[ROWS];
    fill_matrix_with_random_numbers(matrix, ROWS, COLS);
    cout << "The following is a 3x3 random matrix:\n";
    print_matrix(matrix, ROWS, COLS);
    sum_matrix_row_in_array(matrix, arr_rows_sum, ROWS, COLS);
    print_rows_sum_array(arr_rows_sum, ROWS);

    return 0;
}