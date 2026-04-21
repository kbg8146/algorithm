#include <algorithm>
#include <string>
#include <vector>


using namespace std;

bool compare(string a, string b) { return a + b > b + a; }

string solution(vector<int> numbers) {
  string answer = "";
  vector<string> temp;
  for (int num : numbers) {
    temp.push_back(to_string(num));
  }
  sort(temp.begin(), temp.end(), compare);

  for (string num : temp) {
    answer += num;
  }
  if (temp[0] == "0")
    return "0";
  return answer;
}