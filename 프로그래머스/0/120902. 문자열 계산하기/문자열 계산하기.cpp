#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {
    stringstream ss(my_string);
    string token;
    int answer = 0;
    string op = "+";

    while (ss >> token) {
        if (token == "+" || token == "-") {
            op = token;
        } else {
            int num = stoi(token);
            if (op == "+") answer += num;
            else if (op == "-") answer -= num;
        }
    }

    return answer;
}
