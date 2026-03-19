#include <iostream>

using namespace std;

int main(){

    int h,w,n,m;
    cin >> h >> w >> n >> m;
    int h_cnt=h/(n+1), w_cnt=w/(m+1);
    int h_spare = h%(n+1), w_spare = w%(m+1);
    if(h_spare!=0){
        h_cnt+=1;
    }
    if(w_spare!=0){
        w_cnt+=1;
    }
    int square_cnt = h_cnt*w_cnt;

    cout << square_cnt;

    return 0;
}