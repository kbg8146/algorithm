#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    int num=666;
    int cnt=0;

    while(1){
        string s = to_string(num);

        if(to_string(num).find("666")!=-1) cnt++;
        if(cnt==n){
            cout << num;
            break;
        }
        num++;
    }
    
    return 0;
}