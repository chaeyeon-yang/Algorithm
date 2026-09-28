#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int max_num = *max_element(citations.begin(), citations.end());
    for(int i=max_num; i>=0; i--) {
        int tmp = 0;
        for(int j=0; j<citations.size(); j++) {
            if (citations[j] >= i) tmp++;
        }
        if (tmp >= i) {
            answer = i;
            break;
        }
    }
    return answer;
}