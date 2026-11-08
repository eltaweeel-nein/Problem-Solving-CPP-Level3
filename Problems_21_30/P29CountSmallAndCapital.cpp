#include <iostream>
using namespace std;
string read_string() {
    string text;
    cout <<"Please enter a string: " << endl;
    getline(cin, text);
    return text;
}
int count_small_letters(string text) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        if (islower(text[i])) {
            counter++;
        }
    }
    return counter;
}
int count_capital_letters(string text) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            counter++;
        }
    }
    return counter;
}
int count_all_letters(string text) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        counter++;
    }
    return counter;
}
enum enwhat_to_count{upper = 1, lower = 2, all = 3};
int count(string text, enwhat_to_count what_to_count = enwhat_to_count::upper) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        switch (what_to_count) {
            case enwhat_to_count::upper:
                if (isupper(text[i])) {
                    counter++;
                }
                break;
            case enwhat_to_count::lower:
                if (islower(text[i])){
                    counter++;
                }
                break;
            case enwhat_to_count::all:
                counter++;
                break;
        }
    }
    return counter;
}
int main() {
    string text = read_string();
    int count_string = count(text, enwhat_to_count::all);
    cout << "The number of letters is " << count_string << endl;
    count_string = count(text, enwhat_to_count::upper);
    cout << "The number of capital is " << count_string << endl;
    count_string = count(text, enwhat_to_count::lower);
    cout << "The number of lower letters is " << count_string << endl;
    return 0;
}