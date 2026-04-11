#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    cout << n- n/100*22 << " ";

    cout << n - (n - n/100*80)/100*22;

    return 0;
}