#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
long long card[500001];
long long target[500001];

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> card[i];
    }
    sort(card,card+n);
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> target[i];
    }
    for(int i=0;i<m;i++){
        int left=0;
        int right=n-1;
        int mid;
        bool state=0;
        while(left<right){
            mid = (left+right)/2;
            if(target[i] == card[mid]||target[i]==card[left]||target[i]==card[right]){
                state=1;
                break;
            }
            if(target[i]>card[mid]){
                left= mid+1;
            }
            else if(target[i]<card[mid]){
                right= mid-1;
            }
        }
        cout << state <<" ";
    }



    return 0;
}