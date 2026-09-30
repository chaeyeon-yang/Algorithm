#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0; i<commands.size(); i++) {
        vector<int> now = commands[i];
        
        priority_queue<int, vector<int>, greater<int>> q;
        for(int j=now[0]-1; j<now[1]; j++) {
            q.push(array[j]);
        }
        int cnt = 0;
        while(!q.empty()) {
            cnt++;
            if (cnt == now[2]) {
                answer.push_back(q.top());
            } else {
                q.pop();
            }
        }
    }
    return answer;
}