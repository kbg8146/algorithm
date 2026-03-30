#include <iostream>

using namespace std;



int main(){

    int N=0;
    int K=0;

    cin >> N >> K;

    int num=1;
    for(int i=1;i<=N;i++){
        num *= i;
    }
    int den1=1;
    for(int i=1;i<=K;i++){
        den1 *=i;
    }
    int den2=1;
    for(int i=1;i<=(N-K);i++){
        den2 *= i;
    }

    int ans = num/(den1*den2);

    cout << ans;
    return 0;
}