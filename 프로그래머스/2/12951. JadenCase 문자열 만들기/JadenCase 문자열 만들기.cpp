#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    for(int i=0; i<s.size(); i++) {
        if (s[i] == ' ') {
            answer += tmp;
            tmp = "";
            answer += " ";
        } else if (tmp.empty()) {
            if (isdigit(s[i])) {
                tmp += s[i];
            } else {
                tmp += toupper(s[i]);
            }
        } else {
            tmp += tolower(s[i]);
        }
    }
    answer += tmp;
    return answer;
}