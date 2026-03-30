#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    int cnt=0;
    cin >> n;
    for(int num=1;num<=n;num++){
        int x=num;

        while(x%5==0){ 
            cnt++;
            x = x/5;
        }
    }

    cout << cnt;

    return 0;
}