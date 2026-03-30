#include <iostream>

using namespace std;

int n,k,tc;
int address[15][15] ={0};
int value;
int main(){

    cin >> tc;

    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            if(i==0){
                address[i][j] = j;
            }
            else{
                for(int k=0;k<=j;k++){
                    address[i][j] += address[i-1][k];
                }
            }
            //cout << address[i][j] << " ";
        }
        //cout << endl;
    }

    for(int i=0;i<tc;i++){
        cin >> k >> n;
        cout << address[k][n]<< endl;
    }



    return 0;
}