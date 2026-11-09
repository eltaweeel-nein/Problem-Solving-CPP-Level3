#include <iostream>
using namespace std;

string read_string(){
    string text;
    cout << "Please enter a string: " << endl;
    getline(cin, text);
    return text;
}
bool is_vowel(char character){
    character = tolower(character);
    return (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
}

void count_vowels(string text){
    for(int i = 0; i < text.length(); i++){
        if(is_vowel(text[i])){
            cout << text [i]  << "\t";
        }
    }
}

int main(){
    string text = read_string();
    cout << "This is the vowels in of the of the string " << endl;
    count_vowels(text);
    return 0;
}