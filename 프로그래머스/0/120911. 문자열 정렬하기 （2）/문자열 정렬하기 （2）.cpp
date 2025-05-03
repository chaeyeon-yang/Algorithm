#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // 65 97 
    for(char c: my_string) {
        if (c>='a' && c<='z') answer += c;
        else answer += c+32;
    }
    sort(answer.begin(), answer.end());
    return answer;
}