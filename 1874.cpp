#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> s;
vector<int> v;

int main(){

    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    string result = "";
    int vnum=0;
    for(int i=1;i<=n;i++){
        s.push(i);
        result+= "+\n";
        while(!s.empty()&&s.top()==v[vnum]){
            s.pop();
            result +="-\n";
            vnum++;
        }
    }
    if(!s.empty()){
        cout << "NO";
    }
    if(s.empty()){
        cout << result;
    }
    return 0;
}
