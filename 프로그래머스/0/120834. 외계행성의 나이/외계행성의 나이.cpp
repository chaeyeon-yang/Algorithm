#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string tmp = to_string(age);
    for(char c: tmp) {
        answer += c+'11';
    }
    return answer;
}