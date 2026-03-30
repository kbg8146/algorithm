#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
vector<int> v;

int main(){

    int n;
    cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    double num = (double)n*0.15;
    num = round(num);

    double sum=0;
    for(int i=num;i<n-num;i++){
        sum +=v[i];
    }
    double avg = sum/(n-2*num);
    cout << round(avg);
    return 0;
}