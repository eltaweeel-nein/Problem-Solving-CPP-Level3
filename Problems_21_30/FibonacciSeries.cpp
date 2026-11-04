#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int read_number(string msg) {
    int number;
    cout << msg << endl;
    cin >> number;
    return number;
}
// my solution 
void print_fibonacci_using_loop(int number) {
    if (number <= 1) {
        cout << 1 << endl;
    }
    else {

        int first_number = 0;
        int second_number = 1;
        int last_number = first_number + second_number;
        cout << last_number;
        for (int i = 0; i < number-1; i++) {
            cout << setw(3) << last_number << "\t";
            first_number = second_number;
            second_number = last_number;
            last_number = first_number + second_number;
        }
    }

}
// instructor solution
void print_fibo_using_loop(int number) {
    int feb_number = 0;
    int prev1 = 0, prev2 = 1;
    cout << "1 ";
    for (short i = 2; i <= number; i++) {
        feb_number = prev1 + prev2;
        cout << feb_number << "  ";
        prev1 = prev2;
        prev2 = feb_number;
    }
}
int main() {
    int number = read_number("Please enter the number of sequence: ");
    cout <<"\nMy Solution\n";
    print_fibonacci_using_loop(number);
    cout <<"Instructor Solution" << endl;
    print_fibo_using_loop(number);
    return 0;
}
