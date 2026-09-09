#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int supo1[] = {1,2,3,4,5};
    int supo2[] = {2,1,2,3,2,4,2,5};
    int supo3[] = {3,3,1,1,2,2,4,4,5,5};
    
    map<int, int> mp;
    vector<pair<int, int>> v;
    
    for(int i=0; i<answers.size(); i++) {
        if (answers[i] == supo1[i%5]) mp[1]++;
        if (answers[i] == supo2[i%8]) mp[2]++;
        if (answers[i] == supo3[i%10]) mp[3]++;
    }
    for(auto a: mp) {
        v.push_back({a.second, a.first});
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<v.size(); i++) {
        if (i>0 && v[i].first != v[i-1].first) break;
        answer.push_back(v[i].second);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}