#include <iostream>
#include <iomanip>


using namespace std;
const short ROWS = 3;
const short COLS = 3;


void fill_matrix_with_ordered_numbers(int matrix[ROWS][COLS], int rows, int cols){
    short counter = 0;
    for(int row = 0; row < rows; rows++){
        for (int col = 0; col < cols; col++){
            counter++;
            matrix[row][col]= counter;
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
    int rows = 3;
    int cols = 3;
    fill_matrix_with_ordered_numbers(matrix, rows, cols);
    cout << "The following is a 3 * 3 ordered matrix: \n";
    print_matrix(matrix, rows, cols);
    return 0;
}