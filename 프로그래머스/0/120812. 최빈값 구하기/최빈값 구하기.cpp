#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> ma = {0};
    int man = 0;
    map<int,int> mp;
    for(int i: array) {
        mp[i]++;
    }
    for(auto a: mp) {
        if(a.second > man) {
            man = a.second;
            answer = a.first;
        }
        else if(a.second == man) answer = -1;
    }
    
    return answer;
}