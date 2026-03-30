#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node{
    int age;
    string name;
    int idx;
};

bool cmp(Node a,Node b){
    if(a.age!=b.age) return a.age<b.age;
    return a.idx < b.idx;
}

int main(){

    int n;
    cin >> n;
    vector<Node> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i].age >> v[i].name;
        v[i].idx = i;
    }
    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout << v[i].age << " " << v[i].name << "\n";
    }

    return 0;
}