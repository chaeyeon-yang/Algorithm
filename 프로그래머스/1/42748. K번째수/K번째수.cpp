#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i; i<commands.size(); i++) {
        vector<int> now = commands[i];
        vector<int> tmp;
        for (int j=now[0]-1; j<now[1]; j++) {
            tmp.push_back(array[j]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[now[2]-1]);
    }
    return answer;
}