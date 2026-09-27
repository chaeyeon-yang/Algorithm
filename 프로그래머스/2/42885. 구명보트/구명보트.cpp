#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    
    int left = 0, right = people.size() - 1;
    while (left <= right) {
        int s = people[left] + people[right];
        if (s <= limit) {  
            answer++;
            left++;
            right--;
        }
        else if (s > limit) {
            right--;
            answer++;
        } else if (left == right) {
            answer++;
            break;
        }
    }
    return answer;
}