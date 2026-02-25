#include <iostream>
#include <deque>

using namespace std;

int main(){

    int n,k;
    cin >> n;
    cin >> k;
    deque<int> dq;
    
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }

    int x=0;
    for(int i=1;i<=n;i++){

        for(int j=0;j<k-1;j++){
            x = dq.front();
            dq.pop_front();
            dq.push_back(x);
        }
        x = dq.front();
        if(i==1){
            cout << "<" << x;
        }
        else {
            cout << ", " << x;
        }
        dq.pop_front();

    }
    cout << ">";

    return 0;
}