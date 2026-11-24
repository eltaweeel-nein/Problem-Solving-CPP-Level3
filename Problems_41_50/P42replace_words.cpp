#include <iostream>
#include <string>
#include <vector>
// the most important one is to use & with vectors
//
using namespace std;
string read_string(string msg){
    cout << msg << endl;
    getline(cin, msg);
    return msg;
}
void split_string(string text,vector <string>& words, string delim){
    string word;
    int position = 0;
    while((position = text.find(delim)) != string::npos){
        word = text.substr(0, position);
        // to prevent the empty text
        if (word != ""){
            words.push_back(word);
        }
        text = text.erase(0, position + delim.length());
    }
    // same here to confirm the text is not two spaces and so on
    if (text != ""){
        words.push_back(text);
    }
}
void print_words(vector <string> &words){
    for(string &word : words){
        cout << word << endl;
    }
}
string join_string(vector <string> &words, string delim){
    // the length is not negative so what would happen if the user pressed enter directly
    if (words.empty()) return "";
    string text = "";
    for(string &word : words){
        text = text + word + delim;
    }
    text = text.substr(0, text.length()-delim.length());
    return text;
}
string upper_all_string(string text){
    for(int counter = 0; counter < text.length(); counter++){
        text[counter] = toupper(text[counter]);
    }
    return text;
}
void replace_words(string word_to_replace, string replace_to, vector <string>& words, bool match_case = false){
    for(string &word : words){
        if (match_case){
            if (word == word_to_replace){
                word = replace_to;
            }
        }
        else{
            // there is no need to convert the original text i just use it to compare so inside the (if)
            if (upper_all_string(word) ==  upper_all_string(word_to_replace)){
                word = replace_to;
            }
        }
    }
}
int main(){
    vector <string> words;
    string text = read_string("Please enter a string:\n");
    split_string(text, words, " ");
    string word_to_replace = read_string("Please enter the word you want to replace: \n");
    string replace_to = read_string("Please enter the word to replace to: \n");
    // what would happen if an idiot user entered a word not in the string I should take car of this later
    replace_words(word_to_replace, replace_to, words, false);
    string result = join_string(words, "-");
    cout << "This is  the result " << result << endl;
    return 0;
}