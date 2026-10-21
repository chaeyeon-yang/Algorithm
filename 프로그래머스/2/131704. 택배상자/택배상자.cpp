#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;
int solution(vector<int> order) {
    int answer = 0;
    int n = order.size();
    stack<int> bozo;
    vector<int> res;
    vector<bool> visited(n+1);

    int next_item = 1;   // 다음에 나올 상자

    for (int i = 0; i < n; i++) {
        if (order[i] >= next_item) {
            for (int j = next_item; j < order[i]; j++) {
                bozo.push(j);
                visited[j] = true;
            }
            res.push_back(order[i]);
            next_item = order[i] + 1;
        }
        else if (!bozo.empty() && order[i] == bozo.top()) {
            res.push_back(order[i]);
            visited[bozo.top()] = false;
            bozo.pop();
        }
        else {
            break;
        }
    }
    answer = res.size();
    return answer;
}