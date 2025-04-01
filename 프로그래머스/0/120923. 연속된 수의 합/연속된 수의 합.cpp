#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    for(int i=-100; i<100; i++) {
        int now = i;
        int now_sum = 0;
        for(int j=0; j<num; j++) {
            now_sum += now;
            now_sum += j;
        }
        if (now_sum == total) {
            for(int j=0; j<num; j++) {
                answer.push_back(now+j);
            }
        }
    }
    return answer;
}