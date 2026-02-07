#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){

    int m,n;
    cin >> n;
    vector<double> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    m = v[n-1];
    double sum = 0;
    for(int i=0;i<n;i++){
        v[i] = v[i]/m*100;
        sum += v[i];
;    }
    double ans = sum/n;
    cout << ans;
    return 0;
}