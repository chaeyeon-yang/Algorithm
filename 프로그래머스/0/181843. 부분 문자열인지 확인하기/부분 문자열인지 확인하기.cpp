#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    bool flag = false;
    for(int i=0; i<my_string.size(); i++) {
        if(my_string.substr(i, target.size()) == target) flag = true;
    }
    if (flag) answer = 1;
    return answer;
}