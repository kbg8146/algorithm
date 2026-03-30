#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    
    int m;
    cin >> m;
    int num=0;
    for(int i=0;i<m;i++){
        cin >> num;
        int l = lower_bound(v.begin(),v.end(),num)-v.begin();
        int r = upper_bound(v.begin(),v.end(),num)-v.begin();
        cout << r-l << " ";
    }

    

    return 0;
}