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
bool is_equal(int sum1, int sum2){
    return (sum1 == sum2);
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int rows = 3;
    int cols = 3;
    fill_matrix_with_random_numbers(matrix, rows, cols);
    fill_matrix_with_random_numbers(matrix2, rows, cols);
    cout << "This is the matrix: \n" << endl;
    print_matrix(matrix, rows, cols);
    cout << "\n\nThis is the second matrix: " << endl;
    print_matrix(matrix2, rows, cols);
    int sum = sum_matrix(matrix, rows, cols);
    cout << "\nThe sum of the matrix is " << sum;
    int sum2 = sum_matrix(matrix2, rows, cols);
    cout << "\nThe sum of the matrix2 is " << sum2 << endl;
    if (is_equal(sum, sum2)){
        cout << "The two matrix are equal\n";
    }
    else{
        cout << "The two matrix are not equal\n";
    }
    return 0;
}