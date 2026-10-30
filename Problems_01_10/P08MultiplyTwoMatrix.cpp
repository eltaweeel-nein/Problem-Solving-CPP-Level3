#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int COLS = 3;
const int ROWS = 3;

int generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols){
    int counter = 0;
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            matrix[row][col] = generate_random_number(1,100);
        }
    }
}
void multiply_two_matrix(int matrix[ROWS][COLS], int matrix2[ROWS][COLS], int matrix3[ROWS][COLS], int rows, int cols){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            matrix3[row][col] = matrix[row][col] * matrix2[row][col];
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
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int matrix3[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    fill_matrix_with_random_numbers(matrix2, rows, cols);
    cout << "This is the first matrix: \n"; 
    print_matrix(matrix, rows, cols);
    cout << endl;
    cout << "This is the second matrix: \n";
    print_matrix(matrix2, rows, cols);
    cout << endl;
    multiply_two_matrix(matrix, matrix2, matrix3, rows, cols);
    cout << "This is the third matrix: " << endl; 
    print_matrix(matrix3, rows, cols);
    return 0;
}
