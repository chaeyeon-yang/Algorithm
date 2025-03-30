#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    bool flag = false;
    for(int num: num_list) {
        if (num == n) flag = true;
    }
    if (flag) answer = 1;
    else answer = 0;
    return answer;
}