#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    stack<int> s;
    string order;
    int num;
    for(int i=0;i<n;i++){
        cin >> order;
        if(order == "push"){
            cin >> num;
            s.push(num);
        }
        else if(order == "pop"){
            if(s.size()>0){
                cout << s.top()<<"\n";
                s.pop();
            }
            else{
                cout << -1 << "\n";
            }
        }
        else if(order == "size"){
            cout << s.size() << "\n";
        }
        else if(order == "top"){
            if(s.size()>0){
                cout << s.top() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
        else if(order == "empty"){
            if(!s.size()){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }

    }

    return 0;
}

