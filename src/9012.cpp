#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    string vps;
    int cnt=0;
    bool state = 1;
    for(int i=0;i<n;i++){
        cin >> vps;
        cnt=0;
        for(int j=0;j<vps.size();j++){
            if(vps[j]=='('){
                cnt++;
            }
            else if(vps[j]==')'){
                cnt--;
            }
            if(cnt<0){
                state=0;
                break;
            }
        }
        if(cnt!=0) state=0;
        
        if(state) cout << "YES" <<"\n";
        else cout << "NO" << "\n";
        state=1;
    }


    return 0;
}