#include <iostream>
using namespace std;

char read_char(){
    char character;
    cout << "Please enter a char to see: " << endl;
    cin >> character;
    return character;
}
bool is_vowel(char character){
    character = tolower(character);
    return (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
}
void print_result(char character){
    if(is_vowel(character)){
        cout << "The letter you have entered is vowel " << endl;
    }
    else{
        cout << "The letter is not vowel " << endl;
    }
}

int main(){
    char character = read_char();
    print_result(character);
    return 0;
}