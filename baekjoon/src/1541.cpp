#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    string sent;
    cin >> sent;
    vector<string> tokens;
    string token="";
    int ans =0;
    for(auto& c:sent){
        if(c=='-'){
            tokens.push_back(token);
            token="";
        }
        else{
            token += c;
        }
    }
    tokens.push_back(token);

    for(int i=0;i<tokens.size();i++){
        string number="";
        int sum=0;

        for(auto &c:tokens[i]){
            if(c=='+'){
                sum += stoi(number);
                number="";
            }
            else{
                number +=c;
            }
        }
        sum+=stoi(number);

        if(i==0) ans+=sum;
        else ans-=sum;
    }
    cout << ans;
    return 0;
}