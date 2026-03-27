#include <iostream>

using namespace std;
int cnt[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;

        cnt[num]++;
    }

    for(int i=1;i<=10000;i++){
        if(cnt[i]>0){
            for(int j=0;j<cnt[i];j++){
                cout << i << "\n";
            }
        }
    }
}