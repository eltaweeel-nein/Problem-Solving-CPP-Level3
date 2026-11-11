#include <iostream>
#include <string>

using namespace std;
string read_string(){
    string text;
    cout << "Please enter a string to count its words: " << endl;
    getline(cin, text);
    return text;
}
int count_each_word(string text){
    int counter = 0;
    string delim = " ";
    int position = 0;
    string word;
    while((position = text.find(delim)) != string::npos){
        word = text.substr(0, position);
        if(word != " "){
            counter ++;
        }
        text.erase(0, position + delim.length());
    }
    if (text != " "){
        counter ++;
    }
    return counter;
}
int main(){
    string text = read_string();
    int number_of_words = count_each_word(text);
    cout << "The number of words is " << number_of_words << endl;
    return 0;
}