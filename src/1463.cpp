#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){

    int num;
    cin >> num;
    vector<int> dp(1000000);
    dp[1]=0;
    dp[2]=1;
    
    for(int i=3;i<=num;i++){
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        if(i%2==0){
            x=dp[i/2]+1;
        }
        if(i%3==0){
            y=dp[i/3]+1;
        }
        z=dp[i-1]+1;
        dp[i] = min({x,y,z});
        
    }
    cout << dp[num];
    return 0;
}