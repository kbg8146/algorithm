#include <iostream>
#include <set>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    int num;
    string s;
    set<int> S;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="add"){
            cin >> num;
            S.insert(num);
        }
        else if(s=="check"){
            cin >> num;
            if(S.find(num)!=S.end()){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(s=="remove"){
            cin >> num;
            S.erase(num);
        }
        else if(s=="toggle"){
            cin >> num;
            if(S.find(num)!=S.end()){
                S.erase(num);
            }
            else{
                S.insert(num);
            }
        }
        else if(s=="all"){
            for(int i=1;i<=20;i++){
                S.insert(i);
            }
        }
        else if(s=="empty"){
            for(int i=1;i<=20;i++){
                S.erase(i);
            }
        }
    }

    return 0;
}