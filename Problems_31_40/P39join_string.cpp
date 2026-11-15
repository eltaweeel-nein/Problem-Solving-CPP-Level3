#include <iostream>
#include <string>
#include <vector>

using namespace std;
string join_string(vector <string>& words, string delim){
    string text = "";
    for(string &word : words){
        text = text + word + delim;
    }
    return text.substr(0, text.length()-delim.length());
}
int main(){

    vector <string> words = {"Ahmed", "Ibrahim", "Eltaweel", "Fathy"};
    string text = join_string(words, " ");
    cout << "This is the string: " << endl;
    cout << text;
    return 0;
}