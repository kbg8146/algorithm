#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int &a,int &b){
    return a>b;
}

int main(){

    vector<int> v(3,0);
    while(1){
        
        cin >> v[0] >> v[1] >> v[2];
        if(v[0]==0 && v[1]==0 && v[2]==0) break; 
        sort(v.begin(),v.end(),compare);
        if(v[0]<v[1]+v[2]){ 
            if(v[0]==v[1] && v[1]==v[2]){
                cout << "Equilateral" <<"\n";
            }      
            else if(v[0]==v[1]||v[1]==v[2]||v[0]==v[2]){
                cout << "Isosceles" << "\n";
            }
            else{
                cout << "Scalene" << "\n";
            }
        }            
        else{
            cout << "Invalid" << "\n";
        }
    }
    return 0;
}

/*
Equilateral: 

*/