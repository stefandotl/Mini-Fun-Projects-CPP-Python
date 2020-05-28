#include<iostream>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main(){

    string input;
    getline(cin, input);
    vector<char> word;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string backwards = "zyxwvutsrqponmlkjihgfedcba";

    for (int i=0; i < input.length(); i++){
        char c = input[i];
        c = tolower(c);
        if (!isspace(c)){
            int index = alphabet.find(c);
            char letter = backwards[index];
            word.push_back(letter);
        }
        else{
            // cout << "word: " << word << endl;
            char empty_char = ' ';
            word.push_back(empty_char);
            // cout << "empty space" << endl;
        }        
    }

    for (int i=0; i < word.size(); i++){
            cout << word[i];
        }

    return 0;
}