#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    map<string,int> mp;
    vector<string> v;
    for(int i=1;i<=n;i++){
        string s="";
        cin >> s;
        v.push_back(s);
        mp[s]=i;
    }

    for(int i=1;i<=m;i++){
        string s="";
        cin >> s;
        if(isdigit(s[0])){//숫자->이름
            cout << v[stoi(s)-1] << "\n";
        }
        else{ //이름-> 숫자
            cout << mp[s] << "\n";
        }
    }

    return 0;
}