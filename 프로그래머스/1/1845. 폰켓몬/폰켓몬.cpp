#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    map<int, int> mp;
    for(int n: nums) {
        mp[n]++;
    }
    for(auto a: mp) {
        if (a.second > 0) answer++;
    }
    if (answer > nums.size()/2) answer = nums.size()/2;

    return answer;
}