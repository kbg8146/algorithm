    #include <string>
    #include <vector>
    #include <vector>
    #include <algorithm>

    using namespace std;

    vector<int> solution(vector<int> answers) {
        vector<int> answer;
        int point[3]={0};
        int student1[10001]={1,2,3,4,5};
        int student2[10001]={2,1,2,3,2,4,2,5};
        int student3[10001]={3,3,1,1,2,2,4,4,5,5};

        for(int i=0;i<answers.size();i++){
            if(answers[i]==student1[i%5]) point[0]++;
            if(answers[i]==student2[i%8]) point[1]++;
            if(answers[i]==student3[i%10]) point[2]++;
        }
        int max_point = 0;
        max_point = max({point[0],point[1],point[2]});

        for(int i=0;i<3;i++){
            if(max_point == point[i]){
                answer.push_back(i+1);
            }
        }

        return answer;
    }