#include <iostream>

using namespace std;

long long power(long long a, long long b, long long c){
    if(b==0) return 1;
    long long half = power(a,b/2,c);
    long long ans = 1;
    ans = (half * half)%c;
    if(b%2){
        ans = (ans*a)%c;
    }
    return ans;
}

int main(){

    int a, b ,c;
    cin >> a >> b >> c;
    cout << power(a,b,c);
    return 0;
}