#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    char color[51][51];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> color[i][j];
        }
    }

    int ans1=INT_MAX;
    int ans2=INT_MAX;
    int acnt=0,bcnt=0;
    for(int k=0;k<=n-7;k++){
        for(int l=0;l<=m-7;l++){
            for(int i=k;i<k+8;i++){
                for(int j=l;j<l+8;j++){

                    if((i+j)%2==1){
                        if(color[i][j]!='W') acnt++;
                    }
                    else{
                        if(color[i][j]!='B') acnt++;
                    }

                    if((i+j)%2==0){
                        if(color[i][j]!='W') bcnt++;
                    }
                    else{
                        if(color[i][j]!='B') bcnt++;
                    }
                }
            }
            ans1 = min(acnt,bcnt);
            ans2 = min(ans1,ans2);
            acnt=0,bcnt=0;
        }
    }
    cout << ans2;

    return 0;
}