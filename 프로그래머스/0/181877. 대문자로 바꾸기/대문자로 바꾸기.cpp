#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    //65 : A, 97 : a
    for(char a: myString) {
        if (a>=97) {
            a = a-32;
        }
        answer += a;
    }
    return answer;
}