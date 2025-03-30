#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";

    int ex_size = ex.size();
    for(string s: str_list) {
        bool flag = false;
        for(int i=0; i<s.size(); i++) {
            if (s.substr(i, ex_size) == ex) flag = true;
        }
        if (!flag) answer += s;
    }
    return answer;
}