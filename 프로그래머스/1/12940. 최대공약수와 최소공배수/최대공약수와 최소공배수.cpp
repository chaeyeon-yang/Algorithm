#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int min_tmp = min(n, m);
    int max_tmp = max(n, m);
    
    int max_v = 0;
    int min_v = 0;
    // 최대공약수
    for(int i=1; i<= min_tmp; i++) {
        if (n%i == 0 && m%i ==0) {
            max_v = max(i, max_v);
        }
    }
    // 최소공배수
    for(int i=min_tmp; i<=m*m; i++) {
        if (i%n == 0 & i%m ==0) {
            min_v = i;
            break;
        }
    }
    answer.push_back(max_v);
    answer.push_back(min_v);
    return answer;
}