#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int numbers[101]={0};        
    for(int i=0;i<commands.size();i++){    
        int cnt=0;
        int n= commands[i][1]-commands[i][0]+1;
        for(int j=commands[i][0]-1;j<=commands[i][1]-1;j++){
            numbers[cnt++]=array[j];
        }
        sort(numbers,numbers+n);
        answer.push_back(numbers[commands[i][2]-1]);
    }
    
    
    return answer;
}