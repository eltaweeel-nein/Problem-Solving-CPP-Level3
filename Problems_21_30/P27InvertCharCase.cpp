#include <iostream>
using namespace std;

char read_char(){
    char character;
    cout << "Please enter a charcter: " << endl;
    cin >> character;
    return character;
}

int invert_char_case(char character){
    return isupper(character)? tolower(character) : toupper(character);
}
int main(){
    char character = read_char();
    cout << "The charcter after inverting case: " << endl;
    character = invert_char_case(character);
    cout << character << endl;
    return 0;
}