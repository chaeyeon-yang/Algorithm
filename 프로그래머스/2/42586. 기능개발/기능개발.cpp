#include <string>
#include <vector>
#include <deque>
#include <iostream>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    deque<double> dq;
    for(int i=0; i<progresses.size(); i++) {
        double now = progresses[i];
        dq.push_back(ceil((100-now)/speeds[i]));
    }
    
    int now = dq.front();
    dq.pop_front();
    int cnt = 1;
    while(!dq.empty()) {
        // cout << now << " 은 지금 값이고 " << dq.front() << " 은 맨 앞값\n";
        if (dq.front() <= now) {
            cnt++;
            dq.pop_front();
        } else {
            answer.push_back(cnt);
            now = dq.front();
            dq.pop_front();
            cnt = 1;
        }
    }
    answer.push_back(cnt);

    return answer;
}