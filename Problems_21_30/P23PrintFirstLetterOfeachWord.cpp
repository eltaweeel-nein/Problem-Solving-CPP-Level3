#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string read_string() {
    string text;
    cout << "Please enter your string: " << endl;
    getline(cin, text);
    return text;
}

void print_first_letter_of_each_word(string text) {
    cout << "This is the first letter of each word: " << endl;
    bool is_first_letter = true;
    for (int counter = 0; counter < text.length(); counter++) {
        if (is_first_letter && text[counter] != ' ') {
            cout << setw(3) << text[counter] << "\t";
        }
        is_first_letter = text[counter] == ' ' ? true : false;
    }
}

int main() {
    string text = read_string();
    print_first_letter_of_each_word(text);
    return 0;
}