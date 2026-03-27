#include <iostream>
#include <vector>

using namespace std;

int arr[51];

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    int a, b;
    
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(v[i].first<v[j].first&&v[i].second<v[j].second){
                    cnt++;
                }
            }

        }
        arr[i] = cnt;
        cnt = 1;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}