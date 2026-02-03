#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    long long x = 0;
    long long y = 0;
    for(long long i=left; i<=right; i++) {
        x = i/n+1;
        y = i%n+1;
        int res = x>y? x: y;
        answer.push_back(res);
    }
    return answer;
}