#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;

int main(){

    int n;
    cin >> n;
    dp.assign(n+1,0);

    if(n>=1){
        dp[1]=1;
    }
    if(n>=2){
        dp[2]=3;
    }
    if(n>=3){
        for(int i=3;i<n+1;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-2];
            dp[i]=dp[i]%10007;
        }
    }
    cout << dp[n];
    
    return 0;
}