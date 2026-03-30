#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int visited[2002];

bool compare(const int &a,const int &b){
    return a < b;
}

int main(){

    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x=0;
        cin >> x;
        x+=1001;
        if(!visited[x]){
            v.push_back(x); 
        }
        visited[x]++;
    }
    sort(v.begin(),v.end(),compare);

    for(auto &x: v){
        cout << x-1001 << "\n";
    }
    return 0;
}