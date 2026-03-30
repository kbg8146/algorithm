#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int sum =0;
    int pos=0;
    for(int i=0;i<13;i++){
        if(s[i]=='*'){
            pos = i;
           continue; 
        }
        //짝수
        else if((i+1)%2==0) sum +=3*(s[i]-'0');
        //홀수
        else if((i+1)%2==1) sum +=(s[i]-'0');
        //cout << sum << endl;
    }
    int x = 0;
    for(int i=0;i<10;i++){
        if((pos+1)%2==0) x=3*i;
        else if((pos+1)%2==1) x=i;
        if((sum+x)%10==0) {
            cout << i;
            break;
        }
        x=0;
    }
    return 0;
}