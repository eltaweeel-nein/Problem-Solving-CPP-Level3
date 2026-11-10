#include <iostream>
#include <string>
using namespace std;

string read_string(){
    string text;
    cout << "Please enter a string: " << endl;
    getline(cin, text);
    return text;
}

void print_each_word(string text){
    cout << "Your string words are: " << endl;
    int position = 0;
    string word;
    string delim = " ";
    while ((position= text.find(delim)) != string::npos){
        word = text.substr(0,position);
        if(word != ""){
            cout << word << endl;
        }
        text.erase(0, position+delim.length());
    }
    if (text != ""){
        cout  << text << endl;
    }
}

int main(){
    string text = read_string();
    print_each_word(text);
    return 0; 
}