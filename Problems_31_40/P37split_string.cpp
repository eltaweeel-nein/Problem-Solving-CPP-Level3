#include <iostream>
#include <vector>
#include <string>

using namespace std;
string read_string(){
    string text;
    cout << "Please enter a string to split: " << endl;
    getline(cin, text);
    return text;
}
void split_string(string text, vector<string>&words){
    string word;
    int position = 0;
    string delim = " ";
    while ((position = text.find(delim)) != string::npos){
        word = text.substr(0,position);
        if(word != " "){
            words.push_back(word);
        }
        text.erase(0, position + delim.length());
    }
    if (text != " "){
            words.push_back(text);
        }
}
void print_words(vector<string>&words){
    for (string word : words){
        cout << word << endl;
    }
}
int main(){
    vector<string>words;
    string text = read_string();
    split_string(text, words);
    cout << "This is the words: " << endl;
    print_words(words);
    return 0;
}