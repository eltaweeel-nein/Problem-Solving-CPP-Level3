#include <iostream> 
#include <iomanip>

using namespace std;

const short ROWS = 3;
const short COLS = 3; 

int generate_random_number(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fill_matrix_with_random_numbers(int matrix[ROWS][COLS], short rows, short cols){
    for(short i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = generate_random_number(1,100);
        }
    }
}

void print_matrix(int matrix[ROWS][COLS], short rows, short cols){
    for(int row = 0; row < rows; row++){
        for (short col = 0; col < cols; col++){
            cout << setw(3) << matrix[row][col] << "    ";
        }
        cout << endl;
    }
}
int row_sum(int matrix[ROWS][COLS], short row_number, short cols){
    int sum = 0;
    for (short counter = 0; counter < cols; counter++){
        sum += matrix[row_number][counter];
    }
    return sum;
}
void print_each_row_sum(int matrix[ROWS][COLS], short rows, short cols){
    cout << "The folowing are the sum of each row in matrix: \n\n";
    for(short counter = 0; counter < rows; counter++){
        cout << "Row " << counter + 1 << " Sum " << row_sum(matrix, counter, cols);
        cout << endl;
    }
}
int main(){
    srand((unsigned)time(NULL));
    int matrix[ROWS][COLS];
    fill_matrix_with_random_numbers(matrix, ROWS, COLS);
    cout << "\nThe following is a 3 * 3 random matrix: \n\n";
    print_matrix(matrix, ROWS, COLS);
    cout << "\n";
    print_each_row_sum(matrix, ROWS, COLS);
    return 0;
}