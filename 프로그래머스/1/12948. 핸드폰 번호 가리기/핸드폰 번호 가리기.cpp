#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int k = phone_number.size();
    for(int i=0; i<k-4; i++) {
        answer += "*";
    }
    string sub_s = phone_number.substr(k-4, 4);
    answer += sub_s;
    return answer;
}