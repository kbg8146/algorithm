#include <iostream>

using namespace std;

int n,r,c;
int cnt;
void find(int size, int x, int y){

    if(size==1){
        cout << cnt;
        return;
    }

    int half = size/2;
    if(x<=r && r<x+half && y<=c && c<y+half){ // 1
        find(half,x,y);
    }
    else if(x<=r && r<x+half && y+half<=c && c<y+size){
        cnt += half*half;
        find(half,x,y+half);
    }
    else if(x+half<=r && r<x+size && y<=c && c<y+half){
        cnt += half*half*2;
        find(half,x+half,y);
    }
    else{
        cnt += half*half*3;
        find(half,x+half,y+half);
    }

}

int main(){

    cin >> n >> r >> c;
    int size=2;
    for(int i=0;i<n;i++){
        size*=2;
    }
    find(size,0,0);
    return 0;
}