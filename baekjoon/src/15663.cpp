#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
vector<int> arr;
int visited[9];
int result[9];
void backtrack(int depth){
    
    if(m==depth){
        for(int i=0;i<m;i++){
            
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    int last=-1;
    for(int i=0;i<n;i++){
        if(last == arr[i]) continue;
        if(!visited[i]){
            visited[i]=true;
            result[depth] = arr[i];
            last = arr[i];
            backtrack(depth+1);
            visited[i]=false;
        }
    }
}

int main(){

    cin >> n >> m;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
   
    backtrack(0);
    return 0;
}