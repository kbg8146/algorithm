#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    string num;
    cin >> num;

    long long ans=0;
    for(int i=0;i<n;i++){
        ans += num[i]-'0';
    }
    cout << ans;

    return 0;
}
