#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<char> st;
    
    string x; 
    while(getline(cin,x)){
        if(x=="."){
            break;
        }
        for(int i=0;i<x.size();i++){
            //cout << x[i] << " ";
            if(x[i]=='('){
                st.push('(');
            }
            else if(x[i]=='['){
                st.push('[');
            }
            else if(x[i]==')'){
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(')');
                }
            }
            else if(x[i]==']'){
                if(!st.empty()&&st.top()=='['){
                    st.pop();
                }
                else{
                    st.push(']');
                }
            }
            else if(x[i]=='.'){
                if(!st.empty()){
                    cout << "no" << "\n";
                    while(!st.empty()){
                        st.pop();
                    }
                }
                else{
                    cout << "yes" << "\n";
                }
            }
        }
    }
    


    return 0;
}