#include <iostream>
#include <vector>

using namespace std;
int n,k;
vector<int> coin;
int cnt=0;
void find(int money){
    int q=0;
    int i=n-1;
    if(money == 0) return;

    for(i=n-1;i>=0;i--){
        if(money>=coin[i]){
            q = money/coin[i];
            money = money-coin[i]*q;
            cnt += q;
            find(money);
            return;
        }
    }
}

int main(){
    cin >> n >> k;
    coin.resize(n+1);
    for(int i=0;i<n;i++){
        cin >> coin[i];
    }
    find(k);
    cout << cnt;
    return 0;
}
/*
    if(4200보다 작은거)
        4200보다 바로작은걸로 나누기
        4200-나눈값
        if(200보다 작은거)
            200보다 바로작은걸로 나누기
            200-나눈값
            재귀..?
*/