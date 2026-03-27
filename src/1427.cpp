#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compare(long long &a, long long &b){
    return a>b;
}

int main(){

    long long n;
    cin >> n;
    vector<long long> v;

    while(n!=0){

        v.push_back(n%10);
        n=n/10;

    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    return 0;
}
