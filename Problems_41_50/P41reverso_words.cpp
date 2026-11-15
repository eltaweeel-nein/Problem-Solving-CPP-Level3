#include <iostream>
#include <string>
#include <vector>

using namespace std;

string read_string(){
    string text;
    cout << "Please enter a text: " << endl; 
    getline(cin, text);
    return text;
}

void split_words(string text, vector<string>& words){
    string delim = " ";
    int position = 0;
    string word;
    while ((position = text.find(delim)) != string::npos){
        word = text.substr(0,position);
        if(word != " "){
            words.push_back(word);
        }
        text.erase(0,position+delim.length());
    }
    if (text != " "){
        words.push_back(text);
    }
}
void reverso_words(vector<string>& words, vector<string>& reverse_words){
    for (int i = words.size(); i > 0; i--){
        reverse_words.push_back(words[i-1]);
    }
}

string string_elements(vector <string> & words, string delim){
    string text = "";
    for(string& word: words){
        text = text + word + delim;
    }
    return text.substr(0,text.length()-delim.length());
}

int main(){
    vector <string> words;
    vector <string> reverse_words;
    string text = read_string();
    cout <<"This is the text: " << endl;
    cout << text << endl;
    split_words(text, words);
    cout << "This is the words reversed: " << endl;
    reverso_words(words, reverse_words);
    string elements = string_elements(reverse_words, " ");
    cout << elements << endl;
    return 0;
}