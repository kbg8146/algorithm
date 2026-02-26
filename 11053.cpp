#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),dp(n,1);
    for(int i=0;i<n;i++) cin >> a[i];


    for(int j=1;j<n;j++){
        for(int i=0;i<j;i++){
        
            if(a[i]<a[j]){
                dp[j]=max(dp[j],dp[i]+1);
            }
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        x = max(x,dp[i]);
    }
    cout << x;
}