#include <iostream>

using namespace std;

int N;

int main(){
    cin >> N;

    int cnt=0;
    int num=2;
    if(N==1){
        cout << 1;
        return 0;
    }
    while(1){
        cnt++;
        num = num+cnt*6;
        if(num>N) break;
        //cout << num << endl;
    }
    cout << cnt+1;
    return 0;
}