/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <typeinfo>

using namespace std;


char signs[] = {'!', '@', '#', '$', '%', '&', '*'};

int main()
{
    string input;
    cout << input << " give an name" << endl;
    cin >> input;
    
    int counter_sign = 0;
    int counter_number = 0;
    
    for(int i = 0; i < input.length(); i++){
        
        char top = input[i];

        if (isdigit(top)){
            counter_number += 1;
            // cout << "Zahl gefunde";
        }

        for (int j = 0; j < 6; j++){
            if (top == signs[j]){
                counter_sign += 1;
                // cout << top << endl;
            }   
        }          
    }

    if (counter_number >= 2 && counter_sign >= 2 && input.length() > 6){
        cout << "Strong";
    }

    else {
        cout << "Weak";
    }

    return 0;
}
