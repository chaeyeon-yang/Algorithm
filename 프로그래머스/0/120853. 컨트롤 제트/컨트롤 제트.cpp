#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string tmp;
    int now;
    while(ss >> tmp) {
        if (tmp == "Z") {
            answer -= now;
        }
        else {
            answer += stoi(tmp);
            now = stoi(tmp);
        }
    }
    return answer;
}