#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool compare(string a, string b){
    if(a.size()==b.size()) return a<b;
    return a.size()<b.size();
}

int main(){

    int N;
    cin >> N;
    string s[20001];
    for(int i=0;i<N;i++){
        cin >> s[i];
    }
    
    sort(s,s+N,compare);

    for(int i=0;i<N;i++){
        if(s[i]!=s[i+1]) cout << s[i] << endl;
    }
    return 0;
}