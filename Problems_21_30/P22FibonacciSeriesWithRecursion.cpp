#include <iostream>
#include <iomanip>
using namespace std;

// my solution
void print_fibonacci_using_recursion(int number, int prev1, int prev2){
    int fibo_number = 0;
    if(number > 0){
        fibo_number = prev1 + prev2;
        cout << setw(3) << fibo_number << "\t";
        prev1 = prev2;
        prev2 = fibo_number;
        print_fibonacci_using_recursion(number-1, prev1, prev2);
    }
}

// other solution 
void print_fibonacci(int number, int prev1, int prev2){
    int fibo_number = 0;
    if(number > 0){
        fibo_number = prev1 + prev2;
        cout << setw(3) << fibo_number << "\t";
        print_fibonacci(number - 1, prev2, fibo_number);
    }
}
int main(){
    print_fibonacci_using_recursion(10, 0, 1);
    cout << "Other solution " << endl;
    print_fibonacci(10, 0, 1);
    return 0;
}