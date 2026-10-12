#include <iostream> 
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

const short COLS = 3;
const short ROWS = 3;

short generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}
void fill_matrix_with_random_numbers(short matrix[ROWS][COLS], short rows, short cols){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            matrix[row][col] = generate_random_number(1,100);
        }
    }
}
void print_matrix_with_random_numbers(short matrix[ROWS][COLS], short rows, short cols){
    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            cout <<setw(3) <<  matrix[row][col] << "    ";
        }
        cout << endl;
    }
}
int sum_each_col(short matrix[ROWS][COLS], short col_number, short rows){
    int sum = 0;
    for(int row = 0; row < rows; row++){
        sum += matrix[row][col_number];
    }
    return sum;
}
void print_cols_sum(short matrix[ROWS][COLS], short rows, short cols){
    for(short col = 0; col < cols; col++){
        cout << "Col " << col + 1 << " Sum = " << sum_each_col(matrix, col, rows) << endl;
    }
}
int main(){
    srand((unsigned)time(NULL));
    short matrix[ROWS][COLS];
    fill_matrix_with_random_numbers(matrix, ROWS, COLS);
    cout << "\nThe following is a 3 * 3 random matrix: \n";
    print_matrix_with_random_numbers(matrix, ROWS, COLS);
    cout << endl;
    cout << "The following is the sum of each col: " << endl << endl;
    print_cols_sum(matrix, ROWS, COLS);
    return 0;
}