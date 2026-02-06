#include <iostream>
#include <vector>

using namespace std;
    

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n;
    cin >> m;
    vector<long long> v(n+1);
    vector<long long> sum(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        sum[i]=v[i]+sum[i-1];
    }

    int i,j;
    for(int a=0;a<m;a++){
        cin >> i >> j;
        cout << sum[j]-sum[i-1] << "\n";
    }

    return 0;
}