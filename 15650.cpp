#include <iostream>

using namespace std;

int n,m;
int arr[9];
int visited[9];

void backtrack(int depth,int start){
    if(m==depth){
        for(int i=0;i<m;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=start;i<=n;i++){
        arr[depth]=i;
        backtrack(depth+1,i+1);
    }
}

int main(){

    cin >> n >> m;
    backtrack(0,1);

    return 0;
}