#include<iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cin.tie(NULL);
    int n,m;
    cin >> m >> n;

    bool check = 0;

    for(int i=m;i<=n;i++){
        if(i==1) continue;
        for(int j=2;j<=(int)sqrt(i);j++){
            if(i%j==0){
                check=1;
                break;
            }
        }
        if(!check) cout << i << "\n";
        check=0;
    }

    return 0;
}