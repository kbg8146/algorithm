#include <iostream>

using namespace std;

int g[1001];
int s[1001];
int b[1001];

int main(){

    int n,k;
    cin >> n >> k;
    int country;
    for(int i=0;i<n;i++){
        cin >> country;
        cin >> g[country] >> s[country] >> b[country];
    }
    int rank=1;
    for(int i=1;i<=n;i++){
        if(i!=k){
            if(g[i]>g[k]){
                rank++;
            }
            else if(g[i]==g[k]){
                if(s[i]>s[k]){
                    rank++;
                }
                else if(s[i]==s[k]){
                    if(b[i]>b[k]){
                        rank++;
                    }
                }
            }
        }
    }
    cout << rank;

    return 0;
}