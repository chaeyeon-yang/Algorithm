#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(int i=0; i<myString.size(); i++) {
        if (myString[i] == 'x') {
            answer.push_back(cnt);
            cnt = 0;
            if (i == myString.size()-1) {
                answer.push_back(cnt);
            }
        }
        else cnt++;
    }
    if (cnt) answer.push_back(cnt);
    return answer;
}