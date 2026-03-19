#include <iostream>
#include <string>

using namespace std;

int main(){

    string word;
    cin >> word;

    int count[123]={0};
    for(int i=0;i<word.size();i++){
        if(word[i]>90){
            word[i]-=32;
        }
        count[word[i]]++;
    }
    int max_count = 0;
    char alp = 0;
    bool again = 0;
    for(int i=65;i<=90;i++){
        if(count[i]>max_count){
            max_count = count[i];
            alp = i;
            again=0;
        }
        else if(count[i]==max_count){
            again=1;
        }
    }
    if(again == 0) cout << alp;
    else cout << "?";
    

    return 0;
}