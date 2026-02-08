#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;

    int time;
    for(int i=0;i<n;i++){
        cin >> time;
        v1.push_back(time);
    }
    sort(v1.begin(),v1.end());

    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=v1[i];
        ans+=sum;
    }
    cout << ans;

    return 0;
}