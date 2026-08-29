#include <iostream> 
#include <iomanip>
using namespace std; 

const int ROWS = 3;
const int COLS = 3;

int generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = generate_random_number(1,100);
        }
    }
}

void print_matrix(int matrix[ROWS][COLS], int rows, int cols){
    for(int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            cout << setw(3) << matrix[row][col] << "    ";
        }
        cout << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    fill_matrix_with_random_numbers(matrix, ROWS, COLS);
    print_matrix(matrix, ROWS, COLS);
        return 0;
}