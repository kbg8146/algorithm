#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
vector<int> v;
int main(){

    int n;
    cin >> n;
    int x;
    int visited[80001]={0};
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
        sum+=x;
        visited[v[i]+4000]++;
    }
    sort(v.begin(),v.end());

    cout << (int)round((double)sum/n) << "\n";
    cout << v[n/2] << "\n";
    
    int maxFreq=0;
    for(int i=0;i<8001;i++){
        maxFreq = max(maxFreq,visited[i]);
    }
    int count = 0;
    int mode;
    for(int i=0;i<8001;i++){
        if(visited[i]==maxFreq){
            mode=i-4000;
            count++;
            if(count==2) break;
        }
    }
    cout << mode << "\n";
    cout << v[n-1]-v[0];


    return 0;
}