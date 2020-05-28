#include<iostream>
#include<string>
#include<vector>

using namespace std;


void print(std::vector<auto> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) ;
	}
}

int main(){

    string sentence;
    getline(cin, sentence);

    string word;
    vector<string> new_sentence;

    for (int i=0; i < sentence.length(); i++){
        char c = sentence[i];
        if (!isspace(c)){
            word += c;
        }

        if (i == (sentence.length()-1) || isspace(c)){
            new_sentence.push_back(word);
            word.clear();
        }


    }    
    
    for (int i=0; i < new_sentence.size(); i++){
        cout << new_sentence[i].substr(1) << new_sentence[i].substr(0, 1) << "ay ";
    }

    return 0;
}