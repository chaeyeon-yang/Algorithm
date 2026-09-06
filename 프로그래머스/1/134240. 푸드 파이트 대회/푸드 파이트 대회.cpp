#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string answer_tmp = "";
    // 대회에 사용할 수 있는 음식은 짝수 개. 남는 음식은 버려야함
    map<int, int> mp;
    for(int i=1; i<food.size(); i++) {
        int tmp = food[i]/2;
        mp[i] = tmp;
    }
    for(auto a: mp) {
        int cal = a.first;
        int quan = a.second;
        // cout << cal << " " << quan << "\n";
        // char to int --> to_string
        for(int j=0; j<quan; j++) {
            cout << to_string(cal);
            answer += to_string(cal);
        }
    }
    answer_tmp = answer;
    answer += "0";
    reverse(answer_tmp.begin(), answer_tmp.end());
    answer += answer_tmp;
    
    return answer;
}