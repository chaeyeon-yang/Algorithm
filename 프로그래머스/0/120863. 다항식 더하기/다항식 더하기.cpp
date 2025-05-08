#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int z1, z2;
string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string tmp = "";

    while (ss >> tmp) {
        if (tmp.find("x") != string::npos) {
            string now = "";
            for(int i=0; i<tmp.size()-1; i++) {
                now += tmp[i];
            }
            if (now == "") z1 += 1;
            else z1 += stoi(now);
        } else {
            if (tmp != "+") {
                z2 += stoi(tmp);
            }
        }
    }
    
    if (z1 != 0 && z2 == 0) {
        if (z1 == 1) {
            answer += "x";
        } else {
            answer += to_string(z1) + "x";
        }
    }
    if (z1 != 0 && z2 != 0) {
        if (z1 == 1) {
            answer += "x";
        } else {
            answer += to_string(z1) + "x";
        }
        answer += " + ";
        answer += to_string(z2);
    }
    if (z1 == 0) answer += to_string(z2);
    
    return answer;
}