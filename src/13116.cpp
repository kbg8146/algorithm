#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string s[101] ={};
    bool visited[124]={};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int last=0;
    int cur=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt++;
        for(int j=0;j<s[i].size();j++){
            cur = s[i][j];
            if(last==cur){
                
                continue;
            }
            else{
                if(!visited[cur]){
                    visited[cur]=1;
                }
                else{
                    cnt--;
                    break;
                }
                last = cur;
            }
        }
        last=0;cur=0;
        for(int j=97;j<123;j++){
            visited[j]=0;
        }
    }
    cout << cnt;
    return 0;
}
/*
97-122
이전 글자와 지금 글자가 같은지 확인
같지 않으면 지금 글자 visited 처리
근데 이미 visited 처리 되어있으면
break 하고 cnt안하고 다음
*/