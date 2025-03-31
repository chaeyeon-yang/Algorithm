#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    //A:65, a:97
    for(char c:myString) {
        if (c<97) {
            answer += c+32;
        } else answer += c;
    }
    return answer;
}