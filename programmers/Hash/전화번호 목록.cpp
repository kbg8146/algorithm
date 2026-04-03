#include <string>
#include <unordered_set>
#include <vector>


using namespace std;

bool solution(vector<string> phone_book) {
  unordered_set<string> s(phone_book.begin(), phone_book.end());

  for (int i = 0; i < phone_book.size(); i++) {
    for (int j = 0; j < phone_book[i].size(); j++) {
      if (s.count(phone_book[i].substr(0, j)))
        return false;
    }
  }
  bool answer = true;

  return answer;
}