#include <iostream>

using namespace std;

int n,m;
int arr[9];
bool visited[9];

void backtrack(int depth){
    if(depth==m){
        for(int i=0;i<m;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=1;
            arr[depth] = i;
            backtrack(depth+1);
            visited[i] = 0;
        }
    }
}
int main(){

    cin >> n >> m;
    backtrack(0);

    return 0;
}