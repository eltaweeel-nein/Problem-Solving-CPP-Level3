#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string read_string(){
    string text;
    cout << "Please enter your string: " << endl;
    getline(cin, text);
    return text;
}

string trim_left(string text){
    for(int i = 0; i < text.length(); i++){
        if(text[i] != ' '){
            return text.substr(i, text.length()-1);
        }
    }
    return " ";
}
string trim_right(string text){
    for(int i = text.length() -1 ; i >= 0; i--){
        if(text[i] != ' '){
            return text.substr(0, text[i]);
        }
    }
    return " ";
}
string trim(string text){
    return trim_left(trim_right(text));
}
int main(){
    string text = read_string();
    cout << "This is the string: " << endl;
    cout << text << endl;
    cout << "Trim right: " << endl;
    cout << trim_right(text) << endl;
    cout << "Trim left: " << endl;
    cout << trim_left(text) << endl;
    cout << "Trim " << endl;
    cout << trim(text) << endl;
    return 0;
}