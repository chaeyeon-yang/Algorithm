#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string tmp = "";
    for(int i=0; i<my_string.size(); i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z' ||
           my_string[i] >= 'A' && my_string[i] <= 'Z') {
            if(tmp!="") {
                answer += stoi(tmp);
                tmp = "";
            }
        } else {
            tmp += my_string[i];
        }
    }
    if (!tmp.empty()) {
        answer += stoi(tmp);
    }
    return answer;
}