#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> maxHeap;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
    
        if(x==0){
            if(!maxHeap.empty()){
                cout << maxHeap.top() <<"\n";
                maxHeap.pop();
            }
            else{
                cout << 0 <<"\n";
            }
        }
        maxHeap.push(x);            
    }

    return 0;
}