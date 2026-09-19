#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(char c: s) {
        int cnt = 0;
        int now = stoi(to_string(c));
        cout << "now : " << now << " \n";
        while (cnt < index) {
            now += 1;
            now = 97+(now-97)%26;
            bool flag = false;
            for(char sk: skip) {
                if (stoi(to_string(sk)) == now) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cnt++;
            }
        }
        answer += static_cast<char>(now);
    }
    
    
    return answer;
}