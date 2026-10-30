#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int COLS = 3;
const int ROWS = 3;
void fill_matrix_with_ordered_numbers(int matrix[ROWS][COLS], int rows, int cols){
    int counter = 0;
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            counter++;
            matrix[row][col] = counter;
        }
    }
}
void transpose_matrix(int matrix[ROWS][COLS], int matrix2[ROWS][COLS], int rows, int cols){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            matrix2[row][col] = matrix[col][row];
        }
    }
}

void print_matrix(int matrix[ROWS][COLS], int rows, int cols){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            cout << setw(3) << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}
int main(){
    int matrix[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_ordered_numbers(matrix, rows, cols);
    cout << "This is the main matrix: " << endl;
    print_matrix(matrix, rows, cols);
    transpose_matrix(matrix, matrix2, rows, cols);
    cout << "This is the transposed matrix: " << endl;
    print_matrix(matrix2, rows, cols);
    return 0;
}
