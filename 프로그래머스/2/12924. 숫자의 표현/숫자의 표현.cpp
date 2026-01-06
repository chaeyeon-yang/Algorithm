#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=n; i++) {
        int sum = 0;
        int idx = i;
        while(sum < n) {
            sum += idx++;
        }
        if (sum == n) answer++;
    }
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    return answer;
}