#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<vector<int>> dp;

int main(){

    int n;
    cin >> n;
    dp.assign(n,vector<int>(2,0));

    for(int i=0;i<n;i++){
        int num=0;
        cin >> num;
        v.push_back(num);
    }

    dp[0][0]=v[0];//직전 계단을 안밟
    dp[0][1]=v[0];//직전 계단을 밟

    if(n>1){
        dp[1][0]=v[1];
        dp[1][1]=v[1]+v[0];          
    }
      
    if(n>2){
        dp[2][0] = v[2]+v[0];
        dp[2][1] = v[2]+dp[1][0];        
    }

    if(n>3){
        for(int i=3;i<n;i++){
            dp[i][0] = v[i]+max(dp[i-2][0],dp[i-2][1]);
            dp[i][1] = v[i]+dp[i-1][0];
        }        
    }

    cout << max(dp[n-1][0],dp[n-1][1]);
    return 0;
}
