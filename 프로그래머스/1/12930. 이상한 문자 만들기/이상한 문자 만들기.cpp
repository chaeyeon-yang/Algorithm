#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i=0;

    for(char c: s) {
        if (c==' ') {
            answer += c;
            i=0;
        }
        else {
            if (i%2==0) {
                answer += toupper(c);
            } else {
                answer += tolower(c);
            }
            i++;
        }
    }    
    return answer;
}