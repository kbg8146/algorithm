#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(11);

int main(){

    int n;
    cin >> n;

    dp[1]=1;
    dp[2]=2;
    dp[3]=4;

    for(int i=4;i<11;i++){
        for(int j=i-3;j<i;j++){
            dp[i]+=dp[j];
        }
    }        
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        cout << dp[num]<<"\n";
    }


    return 0;
}