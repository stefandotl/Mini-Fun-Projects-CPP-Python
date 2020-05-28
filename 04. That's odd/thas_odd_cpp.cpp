#include <iostream>
#include<string>

using namespace std;

int main(){

    int length_list;
    string numbers;

    cin >> length_list;    

    int number;
    int sum = 0;

    for (int i=0; i < length_list; i++){

        cin >> number;        
        if(number % 2 == 0){
            sum += number;
        }
        
    }

    cout << sum;

    return 0;
}