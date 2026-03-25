#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int,int>>> v;
// 출발, 지름길, 도착점
int main(){
    int n, goal;
    cin >> n >> goal;

    int a, b, d;
    v.resize(10001);
    for(int i=0;i<n;i++){
        cin >> a >> b >> d;
        if(b-a<=d) continue;
        v[b].push_back({a,d});
    }
    vector<int> dp(goal+1,0);
    for(int i=1;i<=goal;i++){
        dp[i] = dp[i-1] + 1;
        for(int j=0; j<v[i].size(); j++){
            int start = v[i][j].first;
            int dist = v[i][j].second;
            dp[i] = min(dp[i], dp[start] + dist);
        }   
    }
    cout << dp[goal];

    return 0;
}