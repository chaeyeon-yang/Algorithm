#include <vector>
#include <iostream>
using namespace std;

bool sosu(int a, int b, int c) {
    int tmp = a+b+c;
    for(int i=2; i*i<=tmp; i++) {
        if (tmp%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            for(int k=j+1; k<nums.size(); k++) {
                bool isSosu = sosu(nums[i], nums[j], nums[k]);
                
                if (isSosu)
                    answer++;
            }
        }
    }
    

    return answer;
}