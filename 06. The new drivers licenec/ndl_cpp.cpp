#include <iostream>
#include <vector>
#include <bits/stdc++.h> 


int getIndex(std::vector<std::string> all_names, std::string name){
    
    for (int i = 0; i < all_names.size(); i++)
    {     
        if (all_names[i] == name){
            return i;
        }
    }
}

int main()
{
    std::string name;
    int number_employers;
    std::string other_people;  
    std::string word;
    std::vector<std::string> names_vector;
    
    std::cin >> name;
    std::cin >> number_employers;
    std::cin.ignore(256, '\n' );  //otherwise next line won't get executed!
    std::getline(std::cin, other_people); 

    names_vector.push_back(name);

    for (int i=0; i < other_people.size(); i++){
        char c = other_people[i];
        if (!isspace(c)){
            word = word + c;
        }        
        else{
            names_vector.push_back(word);
            word.clear();
        }
        if (i + 1 == other_people.size()){
            names_vector.push_back(word);
        }
    }  

    sort(names_vector.begin(), names_vector.end());
    int index = getIndex(names_vector, name);
    // std::cout << index;

    int wait_rounds = index /  number_employers ;
    std::cout << wait_rounds * 20 + 20;

    std::cin.get();
}
