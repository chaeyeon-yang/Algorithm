#include <vector>
#include <map>

using namespace std;

int solution(vector<int> nums) {
    // 1: 1, 2: 1, 3: 2
    // 2: 2, 3: 3, 4: 1
    // 2: 3, 3: 3
    int answer = 0;
    int tmp = 0;
    map<int, int> mp;
    for(int i: nums) {
        mp[i]++;
    }
    for(auto& a: mp) {
        if (a.second >= 1) tmp++;
    }
    if (tmp >= nums.size()/2) answer = nums.size()/2;
    else answer = tmp;
    
    
    return answer;
}