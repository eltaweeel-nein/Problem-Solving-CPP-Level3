#include <iostream>
using namespace std;
// read the string from the user 
string read_string(){
    string text;
    cout << "Please enter a string: " << endl;
    getline(cin, text);
    return text;
}
char upper_char(char character){
    return toupper(character);
}
string upper_string(string text){
    for(int i = 0; i < text.length(); i++){
        text[i] = upper_char(text[i]);
    }
    return text;
}
char read_char(){
    char character;
    cout << "Please enter a char to count: " << endl;
    cin >> character;
    return character;
}
char invert_letter_case(char character){
    return isupper(character)? tolower(character) : toupper(character);
}
int count_letter_in_string(string text, char character, bool match = true){
    int counter = 0;
    for(int i = 0; i < text.length(); i++){
        if(match){
            if(text[i] == character){
                counter++;
            }
        }
        else{
            if(tolower(text[i]) == tolower(character)){
                counter++;
            }
        }
    }
    return counter;
}
int main(){
    string text = read_string();
    char character = read_char();
    cout << "\nLetter '" << character << "' count (match case) = "
    << count_letter_in_string(text, character, true);
    cout << "\nLetter '" << character << "' or '" << invert_letter_case(character)
    << "' count (ignore case) = " << count_letter_in_string(text, character, false);
    cout << endl;

}