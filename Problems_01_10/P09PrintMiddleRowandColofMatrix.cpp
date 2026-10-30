#include <iostream>
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

void print_matrix(int matrix[ROWS][COLS], int rows, int cols){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            cout << setw(3) << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}
void print_middle_row(int matrix[ROWS][COLS] ,int rows, int cols){
    int row_number = rows / 2;
    for(int col = 0; col < cols; col++){
        cout << setw(3) << matrix[row_number][col] << "\t";
    }
}
void print_middle_col(int matrix[ROWS][COLS], int rows, int cols){
    int col_number = cols / 2;
    for(int row = 0; row < rows; row++){
        cout << setw(3) << matrix[row][col_number] << "\t";
    }
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout << "This is the matrix: \n" << endl; 
    print_matrix(matrix, rows, cols);
    cout << "This is the middle row: \n" << endl;
    print_middle_row(matrix, rows, cols);
    cout << endl;
    cout << "This is the middle col: \n" << endl;
    print_middle_col(matrix, rows, cols);
    return 0;
}