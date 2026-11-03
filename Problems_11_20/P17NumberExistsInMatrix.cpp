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
int read_number(string msg) {
    int number;
    cout << msg << endl;
    cin >> number;
    return number;
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
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout <<"This is the matrix" << endl;
    print_matrix(matrix, rows, cols);
    int number = read_number("Please enter a number to check");
    if(is_exist(matrix, rows, cols, number)){
        cout <<"Yes, the number is in the matrix" << endl;
    }
    else{
        cout << "No, the number is not in the matrix" << endl;
    }
    return 0;
}