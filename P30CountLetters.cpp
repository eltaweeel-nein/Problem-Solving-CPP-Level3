#include <iostream>
using namespace std;

string read_string() {
    string text;
    cout <<"Please enter a string: " << endl;
    getline(cin, text);
    return text;
}

int count_all_letters(string text) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        counter++;
    }
    return counter;
}

int main(){
    string text = read_string();
    int count = count_all_letters(text);
    cout << "The number of all letters is " << count << endl;
    return 0;
}