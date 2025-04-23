#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int j=0; j<my_string.size(); j++) {
        if (my_string.substr(j, 1) == letter) continue;
        answer += my_string[j];
    }
    return answer;
}