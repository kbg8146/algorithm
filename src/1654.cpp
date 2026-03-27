#include <iostream>

using namespace std;

int n,k;
long long arr[1000001];
long long sum;
long long big,small;
long long ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
        big = max(big,arr[i]);
    }

    small = 1;
    long long mid=0;
    while(small<=big){
        ans=0;
        mid = (big+small)/2;
        for(int i=0;i<n;i++){
            ans += arr[i]/mid;
        }
        if(ans>=k){
            small = mid+1;
        }
        else{
            big = mid-1;
        }
    }
    cout << big;

    return 0;
}