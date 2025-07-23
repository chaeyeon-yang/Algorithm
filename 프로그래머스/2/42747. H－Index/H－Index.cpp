#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    // 0 1 3 5 6
    // 3 4 5 8 10
    for(int i=0; i<citations.size(); i++) {
        int tmp = citations.size() - i;
        if (citations[i] >= tmp) {
            answer = tmp;
            break;
        }
    }
    
    return answer;
}