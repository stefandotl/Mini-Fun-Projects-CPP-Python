

#include<iostream>

using namespace std;

int main(){

	string input;
	cin >> input;

    bool deja_vu = false;

	for (int i=0; i< input.size(); i++){
		char c = input[i];
		for (int j=i + 1; j < input.size(); j++){
            char new_c = input[j];
            if (c == new_c){
                deja_vu = true;
                break;
            }

        }
	}

    if (deja_vu){
        cout << "Deja Vu";
    }
    else{
        cout << "Unique";
    }

	return 0;
}