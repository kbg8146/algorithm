#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string,int> maps;
string arr1[10001];
string arr2[10001];

int cnt=0;
int main(){

    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
        maps[arr2[i]]++;
    }
    for(int i=0;i<n;i++){
        if(maps.find(arr1[i])!=maps.end()){
            cnt+=maps[arr1[i]];
        }
    }
    cout << cnt;

    return 0;
}