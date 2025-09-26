#include <string>
#include <vector>
#include <deque>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    deque<int> dq;
    for(int i=0; i<progresses.size(); i++) {
        // cout << ceil((100.0 - progresses[i]) / speeds[i]) << " ";
        dq.push_back(ceil((100.0-progresses[i])/speeds[i]));
    }
    int cur = dq.front();
    dq.pop_front();
    int cnt = 1;
    while(!dq.empty()) {
        if (dq.front() <= cur) {
            cnt++;
            dq.pop_front();
        } else {
            answer.push_back(cnt);
            cur = dq.front();
            dq.pop_front();
            cnt = 1;
        }
    }
    if (cnt) answer.push_back(cnt);
    return answer;
}