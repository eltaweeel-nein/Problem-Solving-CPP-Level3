#include <iostream>
#include <string>
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
            matrix[row][col] = generate_random_number(1, 10);
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
bool is_exist(int matrix[ROWS][COLS], int rows, int cols, int number) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (matrix[row][col] == number) {
                return true;
            }
        }
    }
    return false;
}
void print_intersected_numbers(int matrix[ROWS][COLS], int second_matrix[ROWS][COLS], int rows, int cols){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            if(is_exist(matrix, rows, cols, second_matrix[row][col])){
                cout << setw(3) << second_matrix[row][col] << "\t";
            }
        }
    }
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int second_matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    fill_matrix_with_random_numbers(second_matrix, rows, cols);
    cout <<"This is the matrix" << endl;
    print_matrix(matrix, rows, cols);
    cout << endl;
    cout << "This is the second matrix" << endl;
    print_matrix(second_matrix, rows, cols);
    cout << endl;
    cout <<"This is the intersected numbers " << endl; 
    print_intersected_numbers(matrix, second_matrix, rows, cols);
    return 0;
}