#include <iostream>
#include <climits>
using namespace std;

int a,b;

int main(){

    cin >> a >> b;

    int x1, x2, y1, y2;
    int gcd=1;
    int lcm=1;
    for(int i=2;i<=a+b;i++){
        if(a%i==0&&b%i==0){
            a=a/i;
            b=b/i;
            gcd *=i;
            i=1;  
        }
    }
    lcm = gcd*a*b;
    cout << gcd << endl << lcm;
    return 0;
}