#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for (char c : s) {
        int cnt = 0;
        char next = c;
        
        while (cnt < index) {
            next++;
            if (next > 'z') next = 'a';  

            if (skip.find(next) != string::npos) continue; 
            cnt++;
        }
        answer += next;
    }
    return answer;
}
