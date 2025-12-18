#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    int ma = -1e8;
    int mi = 1e8;
    string k;
    while(ss >> k) {
        ma = max(stoi(k), ma);
        mi = min(stoi(k), mi);
    }
    answer += to_string(mi);
    answer += " ";
    answer += to_string(ma);
    return answer;
}