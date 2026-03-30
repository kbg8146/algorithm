#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n==1) {
        cout << 1;
        return 0;
    }
    else if(n==2){
        cout << 2;
        return 0;
    }
    vector<int> box(n+1);
    box[1]=1;
    box[2]=2;
    for(int i=3;i<=n;i++){
        box[i]=(box[i-1]+box[i-2])%10007;
    }
    cout << box[n];

    return 0;
}