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

string lower_first_letter_of_each_word(string text) {
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
    string upper = lower_first_letter_of_each_word(text);
    cout << upper << endl;
    return 0;
}