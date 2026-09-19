#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string now = "";
    int tmp = 0;
    vector<int> v;
    
    while(ss >> now) {
        tmp = stoi(now);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    answer += to_string(v[0]);
    answer += " ";
    answer += to_string(v[v.size()-1]);

    return answer;
}