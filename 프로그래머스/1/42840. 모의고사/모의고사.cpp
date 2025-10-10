#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supo1 = {1,2,3,4,5};
    vector<int> supo2 = {2,1,2,3,2,4,2,5};
    vector<int> supo3 = {3,3,1,1,2,2,4,4,5,5};
    vector<pair<int, int>> tmp;
    
    int supo1_n = 0, supo2_n = 0, supo3_n = 0;
    for(int i=0; i<answers.size(); i+=5) {
        vector<int> now(answers.begin() + i, answers.begin() + i + 5);
        for(int j=0; j<supo1.size(); j++) {
            if (now[j] == supo1[j]) supo1_n++;
        }
    }
    for(int i=0; i<answers.size(); i+=8) {
        vector<int> now(answers.begin() + i, answers.begin() + i + 8);
        for(int j=0; j<supo2.size(); j++) {
            if (now[j] == supo2[j]) supo2_n++;
        }
    }
    for(int i=0; i<answers.size(); i+=10) {
        vector<int> now(answers.begin() + i, answers.begin() + i + 10);
        for(int j=0; j<supo3.size(); j++) {
            if (now[j] == supo3[j]) supo3_n++;
        }
    }
    tmp.push_back({supo1_n,1});
    tmp.push_back({supo2_n,2});
    tmp.push_back({supo3_n,3});
    sort(tmp.rbegin(), tmp.rend());
    
    for(int i=0; i<tmp.size(); i++) {
        if (tmp[i].first > tmp[i+1].first) {
            answer.push_back(tmp[i].second);
            break;
        } 
        answer.push_back(tmp[i].second);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}