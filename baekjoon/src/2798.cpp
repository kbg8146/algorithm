#include <iostream>
#include <climits>
using namespace std;



int main(){

    int n , m;
    cin >> n >> m;
    
    int num[101]={0};

    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    int sum=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j && j!=k && k!=i){
                    sum = num[i]+num[j]+num[k];
                    if(sum<=m){
                        ans = max(sum,ans);
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}