#include <string>
#include <vector>

using namespace std;

int fac(int i) {
    if (i==0 || i==1) return 1;
    return i*fac(i-1);
}

int solution(int n) {
    int answer = 0;
    for(int k=1; k<=n; k++) {
        if (fac(k) == n) {
            answer = k;
            break;
        }
        if (fac(k) > n) {
            answer = k-1;
            break;
        }
    }
    return answer;
}