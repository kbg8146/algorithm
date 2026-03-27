#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.second ==b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),compare);

    int cnt=0;
    int end=0;
    for(int i=0;i<n;i++){
        if(end<=v[i].first){
            end = v[i].second;
            cnt++;
        }    
    }
    cout << cnt;
    return 0;
}