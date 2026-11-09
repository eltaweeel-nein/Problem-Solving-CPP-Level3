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

int count_vowels(string text){
    int counter = 0;
    for(int i = 0; i < text.length(); i++){
        if(is_vowel(text[i])){
            counter++;
        }
    }
    return counter;
}

int main(){
    string text = read_string();
    int count = count_vowels(text);
    cout << "The number of vowels in the string is " << count << endl;
    return 0;
}