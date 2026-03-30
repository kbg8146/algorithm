#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    queue<int> q;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(s=="front"){
            if(q.size()!=0){
                cout << q.front() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
            
        }
        else if(s=="back"){
            if(q.size()!=0){
                cout << q.back() << "\n";
            }
            else{
                cout << -1 << "\n"; 
            }
        }
        else if(s=="size"){
            cout << q.size() << "\n";
        }
        else if(s=="empty"){
            if(q.size()!=0){
                cout << 0 << "\n";
            }
            else{
                cout << 1 << "\n";
            }
        }
        else if(s=="pop"){
            if(q.size()!=0){
                cout << q.front() << "\n";
                q.pop();
            }
            else{
                cout << -1 << "\n"; 
            }
            
        }
    }
    return 0;
}