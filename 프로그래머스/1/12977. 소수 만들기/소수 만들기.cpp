#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            for(int k=j+1; k<nums.size(); k++) {
                int tmp = nums[i]+nums[j]+nums[k];
                bool flag = true;
                for(int b=2; b<tmp; b++) {
                    if (tmp%b==0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) answer++;
            }
        }
    }
    

    return answer;
}