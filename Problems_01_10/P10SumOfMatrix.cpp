#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const int COLS = 3;
const int ROWS = 3;

int generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols){
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

int sum_matrix(int matrix[ROWS][COLS], int rows, int cols){
    int sum = 0;
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            sum+=matrix[row][col];
        }
    }
    return sum;
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    cout << "This is the matrix: \n" << endl;
    print_matrix(matrix, rows, cols);
    int sum = sum_matrix(matrix, rows, cols);
    cout << "\n\nThe sum of the matrix is " << sum << endl;
    return 0;
}