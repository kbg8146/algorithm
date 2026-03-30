#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,int>> v[10001];
int main(){
    int n, goal;
    cin >> n >> goal;
    int a, b, d;
    for(int i=0;i<n;i++){
        cin >> a >> b >> d;
        v[b].push_back({a,d});
    }
    vector<int> dp(goal+1,0);
    for(int i=1;i<=goal;i++){
        dp[i]=dp[i-1]+1;

        for(int j=0;j<v[i].size();j++){
            int start = v[i][j].first;
            int dist = v[i][j].second;
            dp[i] = min(dp[i],dp[start]+dist);
        }
    }
    cout << dp[goal];
}