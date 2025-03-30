#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    bool flag = false;
    for(int i=0; i<str2.size(); i++) {
        if (str2.substr(i, str1.size()) == str1) flag = true;
    }
    if (flag) answer = 1;
    return answer;
}