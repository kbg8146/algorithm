#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a,const string &b){
    return a>b;
}

int main(){

    int n;
    cin >> n;
    
    unordered_map<string ,int> m;
    vector<string> names;
    string name="";
    string state ="";
    vector<string> ans;

    for(int i=0;i<n;i++){
        cin >> name >> state;
        if(state=="enter"){
            m[name]++;
            names.push_back(name);
        }
        else{
            m[name]--;
        }
    }        
    for(int i=0;i<names.size();i++){
        if(m.find(names[i])!=m.end()&&m[names[i]]>0){
            m[names[i]]=0;
            ans.push_back(names[i]);
        }
    }
    sort(ans.begin(),ans.end(),compare);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "\n";
    }
    return 0;
}