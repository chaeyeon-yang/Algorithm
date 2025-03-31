#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string tmp = "";
    for(char s: myString) {
        if (s=='A') tmp += 'B';
        else tmp += 'A';
    }
    for(int i=0; i<tmp.size(); i++) {
        if (tmp.substr(i, pat.size()) == pat) answer = 1;
    }
    cout << tmp;
    return answer;
}