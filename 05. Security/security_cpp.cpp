#include<iostream>
#include<string>
#include <cmath>        // std::abs

using namespace std;

int getIndex(string floor, char c){
    for (int i=0; i < floor.size(); i++){
		// cout << floor[i] << endl;
        if (floor[i] == c){
            return i;
        }
	}   
}

int main()
{

	string floor;
	cin >> floor;

    int t_pos = getIndex(floor, 'T');
    // cout << t_pos;
    int g_pos = getIndex(floor, 'G');
    // cout << g_pos;
    int m_pos = getIndex(floor, '$');
    // cout << m_pos;

    if (g_pos < m_pos && t_pos < m_pos){
        if (abs(g_pos - m_pos) < abs(t_pos-m_pos)){
            cout << "quiet";
        }            
        else{
            cout << "ALARM";  
        }      
    }

    else if (g_pos > m_pos && t_pos > m_pos){
        if (abs(g_pos - m_pos) < abs(t_pos-m_pos)){
            cout << "quiet";
        }            
        else{
            cout << "ALARM";  
        }      
    }

    else {
        if (abs(g_pos - m_pos) < abs(t_pos-m_pos)){
            cout << "quiet";
        }            
        else{
            cout << "ALARM";  
        }      
    }

	return 0;
}