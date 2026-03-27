#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    while(1){
        cin >> num;
        if(num=="0") break;
        bool mirror = true;
        if(num.size()%2==0){
            for(int i=0;i<num.size();i++){
                if(num[i] != num[num.size()-1-i]){
                    mirror = false;
                }
            }
        }
        else{
            for(int i=0;i<num.size();i++){
                if(i==num.size()/2) break;
                if(num[i] != num[num.size()-1-i]){
                    mirror = false;
                }
            }
        }
        if(mirror == 1){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }

    return 0;
}