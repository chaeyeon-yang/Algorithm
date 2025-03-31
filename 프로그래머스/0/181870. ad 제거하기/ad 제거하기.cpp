#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++) {
        bool flag = false;
        for(int j=0; j<strArr[i].size(); j++) {
            if (strArr[i].substr(j, 2) == "ad") flag = true;
        }
        if (!flag) answer.push_back(strArr[i]);
    }
    return answer;
}