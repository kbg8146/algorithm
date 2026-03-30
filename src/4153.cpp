#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main(){

    while(1){
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3,greater<int>());
        if(a[0]==0 && a[1]==0 && a[2]==0) break;
        if(a[0]==0 || a[1]==0|| a[2]==0){
            cout << "wrong" << "\n";
        }
        else if(a[0]*a[0] == a[1]*a[1]+a[2]*a[2]){
            cout << "right" << "\n";
        }
        else{
            cout << "wrong" << "\n";
        }
    };
    
    
    return 0;
}