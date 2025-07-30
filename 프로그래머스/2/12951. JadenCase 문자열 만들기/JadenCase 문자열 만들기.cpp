#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool firstWord = true;
    for(int i=0; i<s.size(); i++) {
        if (isspace(s[i])) {
            answer += s[i];
            firstWord = true;
        } else {
            if (firstWord) {
                if (isdigit(s[i])) {
                    answer += s[i];
                } else {
                    answer += toupper(s[i]);
                }
                firstWord = false;
            } else {
                answer += tolower(s[i]);
            }
        }
    }
    return answer;
}