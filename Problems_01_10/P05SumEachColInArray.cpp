
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


const int COLS = 3;
const int ROWS = 3;

int generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            matrix[row][col] = generate_random_number(1, 100);
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
int sum_each_col(int matrix[ROWS][COLS], int col_number, int rows){
    int sum = 0;
    for(int row = 0; row < rows; row++){
        sum = sum + matrix[row][col_number];
    }
    return sum;
}
void print_each_col_sum(int matrix[ROWS][COLS], int rows, int cols){
    for(int i = 0; i < rows; i++){
        cout << "Col " << i + 1 << " Sum = " << sum_each_col(matrix, i, rows) << endl;
    }
}
void fill_matrix_with_sum_of_cols(int array[COLS], int matrix[ROWS][COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        array[i] = sum_each_col(matrix, i , rows);
    }
}
void print_array(int array[ROWS], int cols){
    for(int i = 0; i < cols; i++){
        cout << array[i] << endl;
    }
}
int main(){
    
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int array[ROWS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout << endl;
    print_matrix(matrix, rows, cols);
    cout << endl;
    print_each_col_sum(matrix, rows, cols);
    fill_matrix_with_sum_of_cols(array, matrix , rows, cols);
    cout << "This is the sum from the array: " << endl;
    cout << endl;
    print_array(array, cols);
    cout << endl;
    return 0;
}