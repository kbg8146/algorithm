#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    string name;
    set<string> S;
    vector<string> v;

    for(int i=0;i<n;i++){
        cin >> name;
        S.insert(name);
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        cin >> name;
        if(S.find(name)!=S.end()){
            v.push_back(name);
            cnt++;
        }
    }
    sort(v.begin(),v.end());
    cout << cnt << "\n";
    for(int i=0;i<cnt;i++){
        cout << v[i] << "\n";
    }

    return 0;
}