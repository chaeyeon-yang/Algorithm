#include <vector>
#include <iostream>
#include <deque>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    deque<int> dq;
    for(int i=0; i<arr.size(); i++) {
        if (dq.empty()) {
            dq.push_back(arr[i]);
        } else {
            if (dq.back() == arr[i]) continue;
            dq.push_back(arr[i]);
        }
    }
    while(!dq.empty()) {
        answer.push_back(dq.front());
        dq.pop_front();
    }

    return answer;
}