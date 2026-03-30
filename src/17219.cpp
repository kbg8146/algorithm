#include <iostream>
#include <map>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    map<string,string> mp;
    string add="",pas="";

    for(int i=0;i<n;i++){
        cin >> add >> pas;
        mp[add]=pas;
    }
    for(int i=0;i<m;i++){
        cin >> add;
        cout << mp[add] << "\n";
    }
    return 0;
}