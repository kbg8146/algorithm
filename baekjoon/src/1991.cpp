#include <iostream>

using namespace std;

int leftside[26];
int rightside[26];

void preorder(int alp){
    if(alp==-1) return;
    cout << (char)(alp+'A');
    preorder(leftside[alp]);
    preorder(rightside[alp]);
}
void inorder(int alp){
    if(alp==-1) return;
    inorder(leftside[alp]);
    cout << (char)(alp+'A');
    inorder(rightside[alp]);
}
void postorder(int alp){
    if(alp==-1) return;
    postorder(leftside[alp]);
    postorder(rightside[alp]);
    cout << (char)(alp+'A');
}

int main(){

    int n;
    cin >> n;
    fill(leftside,leftside+n,-1);
    fill(rightside,rightside+n,-1);

    for(int i=0;i<n;i++){
        char parent,left,right;
        cin >> parent >> left >> right;
        if(left!='.') leftside[parent-'A'] = left-'A';
        if(right!='.') rightside[parent-'A'] = right-'A';
    }
    
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);

    return 0;
}