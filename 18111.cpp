#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int n,m,b;
vector<int> v;
int main(){

    cin >> n >> m >> b;
    int origin_b = b;
    v.assign(n*m,0);
    for(int i=0;i<n*m;i++){
        cin >> v[i];
    }
    int time; int height;
    int min_time=INT_MAX;
    for(int i=0;i<=256;i++){
        time=0;
        b=origin_b;
        for(int j=0;j<n*m;j++){
            
            if(i>v[j]){
                b=b-(i-v[j]);
                time+=1*(i-v[j]);
            }
            else if(i<v[j]){
                b=b+(v[j]-i);
                time+=2*(v[j]-i);
            }
            
        }
        if(b<0) continue;
        min_time=min(min_time,time);
        if(time==min_time) {
            height=i;
        }
        
    }
    cout << min_time << " " << height;
    return 0;
}
