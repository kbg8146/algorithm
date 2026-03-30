#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin >> b;

    int less=INT_MAX;
    int cnt=0;
    for(int j=0;j<=b.size()-a.size();j++){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i+j]){
                cnt++;
            }
        }
        less = min(cnt,less);
        cnt=0;
    }
    cout << less;
    return 0;
}