#include <iostream>
#include <queue>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    int n, m, x;

    for(int i=0; i<tc; i++){
        cin >> n >> m;
        queue<pair<int,int>> q;

        for(int j=0; j<n; j++){
            cin >> x;
            q.push({x, j}); // (우선순위, 인덱스)
        }
        bool exist = false;
        int cnt=0;
        while(!q.empty()){
            queue<pair<int,int>> tmp = q;
            exist=false;
            while(!tmp.empty()){
                if(tmp.front().first>q.front().first){
                    exist = true;
                    break;
                }
                tmp.pop();
            }
            if(exist){
                q.push(q.front());
                q.pop();
            }
            else{
                cnt++;
                if(q.front().second == m){
                    break;
                }
                q.pop();
                
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}