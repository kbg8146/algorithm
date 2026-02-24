#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[9];
int visited[9];
int result[9];

void backtrack(int depth,int start){

    if(depth==m){
        for(int i=0;i<m;i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=start;i<n;i++){
        result[depth]=arr[i];
        backtrack(depth+1,i+1);
    }
}
int main(){

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    backtrack(0,0);
    return 0;
}