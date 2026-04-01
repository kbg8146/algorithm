#include <iostream>

using namespace std;

int main(){

    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int i=-999;i<1000;i++){
        for(int j=-999;j<1000;j++){
            if(c == (a*i+b*j)&&(f == (d*i+e*j))){
                cout << i << " " << j;
                break;
            }
        }
    }

    return 0;
}