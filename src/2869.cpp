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
/*
3 1 5
3 , 2 -> 5
fin = 2
a-b = 2

4 1 5
4 , 3 -> 7
fin = 1
a-b = 3

2 1 5
2 , 1 -> 3 , 2 -> 4 , 3 -> 5
fin = 3
a-b = 1
*/