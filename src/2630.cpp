#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;
int white_cnt=0;
int blue_cnt=0;

bool isSameColor(int x, int y, int size){
    int color = v[x][y];
    for(int i=x;i<x+size;i++){
        for(int j=y;j<y+size;j++){
            if(v[i][j]!=color){
                return false;
            }
        }
    }
    return true;
}

void divideConquer(int x, int y, int size){
    if(isSameColor(x,y,size)){
        if(v[x][y]==0){
            white_cnt++;
        } 
        else{
            blue_cnt++;
        }
        return;
    }
    int newSize = size/2;
    divideConquer(x,y,newSize);
    divideConquer(x,y+newSize,newSize);
    divideConquer(x+newSize,y,newSize);
    divideConquer(x+newSize,y+newSize,newSize);
}

int main(){

    int n;
    cin >> n;
    v.assign(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }

    divideConquer(0,0,n);
    
    cout << white_cnt << '\n';
    cout << blue_cnt << '\n';

    return 0;
}