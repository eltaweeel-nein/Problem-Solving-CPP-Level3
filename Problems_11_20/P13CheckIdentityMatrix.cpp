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
            matrix[row][col] = generate_random_number(0, 1);
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
bool is_identity(int matrix[ROWS][COLS], int rows, int cols){
    for(int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            // check diagonal elements
            if(row == col && matrix[row][col] != 1){
                return false;
            }
            else if(row != col && matrix[row][col] != 0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout << "This is the matrix: \n";
    print_matrix(matrix, rows, cols);
    cout << endl;
    if(is_identity(matrix, rows, cols)){
        cout << "The matrix is identity" << endl;
    }
    else{
        cout <<"The matrix is not identity" << endl;
    }
    return 0;
}