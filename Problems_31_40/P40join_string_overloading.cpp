#include <iostream>
#include <string>

using namespace std;
string join_string(string words[], string delim, int length){
    string text = "";
    for (int counter = 0; counter < length; counter++){
        text += words[counter] + delim;
    }
    return text.substr(0, text.length()-delim.length());
}
int main(){
    string words[] = {"Ahmed","Ibrahim","Eltaweel","Fathy"};
    string text = join_string(words, " ", 4);
    cout << "This is the string: " << endl;
    cout << text << endl;
    return 0;
}