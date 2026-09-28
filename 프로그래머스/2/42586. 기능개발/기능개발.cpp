#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=0; i<progresses.size(); i++) {
        if ((100-progresses[i])%speeds[i] == 0) {
            tmp.push_back((100-progresses[i])/speeds[i]);
        } else {
            tmp.push_back((100-progresses[i])/speeds[i]+1);
        }
    }
    int cur = tmp[0];
    int days = 1;
    for(int i=1; i<tmp.size(); i++) {
        if (tmp[i] > cur) {
            answer.push_back(days);
            cur = tmp[i];
            days = 1;
        } else {
            days++;
        }
    }
    answer.push_back(days);
    return answer;
}