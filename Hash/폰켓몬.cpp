#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int cnt=0;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    for(int i=0;i<m.size();i++){
        if(m[nums[i]]>0){
            cnt++;
            if(cnt==nums.size()/2){
                break;
            }
            m[nums[i]]--;
        }
        else continue;
    }
    int answer = cnt;
    return answer;
}