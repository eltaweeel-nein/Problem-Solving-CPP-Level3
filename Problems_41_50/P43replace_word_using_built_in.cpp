#include <iostream>
#include <string>


using namespace std;
string read_string(string msg){
    string text;
    cout << msg << endl;
    getline(cin, text);
    return text;
}

string replace_word_in_string_using_built_in_function(string text, string word_to_replace, string replace_to){
    int position = text.find(word_to_replace);
    while(position != string::npos){
        text = text.replace(position, word_to_replace.length(), replace_to);
        position = text.find(word_to_replace);
    }
    return text;
}

int main(){
    string text = read_string("Please enter a string: ");
    string word_to_replace = read_string("Please enter a word to replace: ");
    string replace_to = read_string("Please enter the word to replace to: ");
    string result = replace_word_in_string_using_built_in_function(text, word_to_replace, replace_to);
    cout << "Th final result is " << result << endl;
    return 0;
}