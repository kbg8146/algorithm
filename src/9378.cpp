#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        map<string,vector<string>> m;
        int cnt=0;
        cin >> cnt;
        
        string name,cate;
        for(int j=0;j<cnt;j++){
            cin >> name >> cate;
            m[cate].push_back(name);
        }
        int ans=1;
        for(auto& p:m){
            ans *=(p.second.size()+1);
        }
        ans-=1;
        cout << ans << "\n";
    }
    

    return 0;
}