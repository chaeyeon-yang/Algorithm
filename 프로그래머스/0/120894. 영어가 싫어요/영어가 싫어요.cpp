#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string tmp = "";
    map<string, int> mp = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    for(int i=0; i<numbers.size(); i++) {
        for(auto a : mp) {
            if (numbers.substr(i, a.first.size()) == a.first) {
                tmp += to_string(a.second);
                i += a.first.size() - 1;
                break;
            }
        }
        
    }
    answer = stol(tmp);
    return answer;
}