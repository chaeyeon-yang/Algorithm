#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int tmp1 = money/5500;
    int tmp2 = money%5500;
    answer.push_back(tmp1);
    answer.push_back(tmp2);
    return answer;
}