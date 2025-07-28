#include <vector>
#include <iostream>
using namespace std;

int answer = 0;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void backtrack(vector<int>& nums, int start, int count, int sum) {
    if (count == 3) {
        if (isPrime(sum)) answer++;
        return;
    }
    
    for (int i = start; i < nums.size(); i++) {
        backtrack(nums, i + 1, count + 1, sum + nums[i]);
    }
}

int solution(vector<int> nums) {
    answer = 0;
    backtrack(nums, 0, 0, 0);
    return answer;
}
