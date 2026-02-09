#include <iostream>
#include <vector>
using namespace std;

vector<long long> tree;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    long long n,m;
    cin >> n >> m;

    int x,max_h = 0;
    for(int i=0;i<n;i++){
        cin >> x;
        tree.push_back(x);
        max_h = max(max_h,x);
    }
    long long right = max_h;
    long long left = 0;
    long long result = 0;

    while(left<=right){
        long long mid = (right+left)/2;
        long long length=0;

        for(int i=0;i<n;i++){
            if(tree[i]>mid){
                length += (tree[i]-mid);
            }
        }
        if(length>=m){
            result = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout << result;


    return 0;
}