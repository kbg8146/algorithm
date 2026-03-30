#include <iostream>

using namespace std;

int main(){

    int a,b;
    int v;
    cin >> a >> b >> v;
    int snail=0;
    int fin=0;
    int day=0;
    fin = v-a;
    day = fin/(a-b)+1;
    if(fin%(a-b)) cout << day+1;
    else cout << day;
    return 0;
}