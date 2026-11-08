#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string read_string() {
    string text;
    cout << "Please enter your string: " << endl;
    getline(cin, text);
    return text;
}

string upper_all_string(string text){
    for(int counter = 0; counter < text.length(); counter++){
        text[counter] = toupper(text[counter]);
    }
    return text;
}
string lower_all_string(string text){
    for(int counter = 0; counter < text.length(); counter++){
        text[counter] = tolower(text[counter]);
    }
    return text;
}

int main(){
    string txt = read_string();
    cout <<"This is the main file " << endl;
    string upper = upper_all_string(txt);
    cout << "This is the string after upper :" << upper << endl;
    string lower = lower_all_string(txt);
    cout << "This is the string after lower: " << lower << endl; 
    return 0;
}

