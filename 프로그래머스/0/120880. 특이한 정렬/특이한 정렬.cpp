#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int, int>> tmp;
    for(int i=0; i<numlist.size(); i++) {
        tmp.push_back({abs(n-numlist[i]), numlist[i]});
    }
    
    sort(tmp.begin(), tmp.end(), [](
        pair<int, int> a, pair<int, int> b){
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });
        
    for(int i=0; i<tmp.size(); i++) {
        answer.push_back(tmp[i].second);
    }
    
    return answer;
}