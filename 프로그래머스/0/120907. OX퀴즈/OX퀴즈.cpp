#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(string s: quiz) {
        int num1, num2, result;
        string op, eq;
        stringstream ss(s);
        ss >> num1 >> op >> num2 >> eq >> result;
        int calc = (op == "+") ? num1+num2 : num1-num2;
        answer.push_back(calc == result? "O": "X");
    }
    return answer;
}