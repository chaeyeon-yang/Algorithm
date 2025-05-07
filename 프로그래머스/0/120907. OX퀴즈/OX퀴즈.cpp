#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (string q : quiz) {
        stringstream ss(q);
        string tmp;
        int num1, num2, result;
        string op, eq;

        ss >> num1 >> op >> num2 >> eq >> result;

        int calc = (op == "+") ? num1 + num2 : num1 - num2;
        answer.push_back(calc == result ? "O" : "X");
    }

    return answer;
}
