#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int R[1001]={0};
    int G[1001]={0};
    int B[1001]={0};

    for(int i=0;i<n;i++){
        cin >> R[i] >> G[i] >> B[i];    
    }

    for(int i=1;i<n;i++){
        R[i]+=min(G[i-1],B[i-1]);
        G[i]+=min(R[i-1],B[i-1]);
        B[i]+=min(R[i-1],G[i-1]);
    }
    cout << min(R[n-1],min(G[n-1],B[n-1]));
    
    return 0;
}