#include <iostream>
#include <string>
using namespace std;

string read_string(){
    string text;
    cout << "Please enter a string: " << endl;
    getline(cin, text);
    return text;
}

char read_char(){
    char character;
    cout << "Please enter a charcter: " << endl;
    cin >> character;
    return character;
}

int invert_char_case(char character){
    return isupper(character)? tolower(character) : toupper(character);
}

string invert_all_letters_case(string text){
    for(int counter = 0; counter < text.length(); counter++){
        text[counter] = invert_char_case(text[counter]);
    }
    return text;
}

int main(){
    string text = read_string();
    cout << "String after invert all string letter case: \n";
    text = invert_all_letters_case(text);
    cout << text;
    return 0;
}