#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[8];
int visited[8];
int result[8];

void backtrack(int depth){
    if(depth==m){
        for(int i=0;i<m;i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0;i<n;i++){
        result[depth] = arr[i];
        backtrack(depth+1);
    }
}

int main(){

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    backtrack(0);
    return 0;
}