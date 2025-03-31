#include <string>
#include <vector>

using namespace std;

// a: 97, A: 65
vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++) {
        string s = "";
        for(int j=0; j<strArr[i].size(); j++) {
            if (i%2==0) {
                if (strArr[i][j] < 97) {
                    s += strArr[i][j] + 32;
                } else s += strArr[i][j];
            } else {
                if (strArr[i][j] >= 97) {
                    s += strArr[i][j] - 32;
                } else s += strArr[i][j];
            }
        }
        answer.push_back(s);
    }
    return answer;
}