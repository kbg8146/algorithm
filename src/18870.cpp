#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> num(n);
    set<long long> s;
    for(int i=0;i<n;i++){
        cin >> num[i];
        s.insert(num[i]);
    }

    vector<int> v(s.begin(),s.end());

    for(int i=0;i<n;i++){
        int idx = lower_bound(v.begin(),v.end(),num[i])-v.begin();
        cout << idx << " ";
    }
    

    return 0;
}