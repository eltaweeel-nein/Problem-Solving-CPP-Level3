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

string upper_first_letter_of_each_word(string text) {
    cout << "This is the first letter of each word: " << endl;
    bool is_first_letter = true;
    for (int counter = 0; counter < text.length(); counter++) {
        if (is_first_letter && text[counter] != ' ') {
            text[counter] = toupper(text[counter]);
        }
        is_first_letter = text[counter] == ' ' ? true : false;
    }
    return text;
}

int main(){
    string text = read_string();
    cout <<"string after convertion: " << endl;
    string upper = upper_first_letter_of_each_word(text);
    cout << upper << endl;
    return 0;
}