#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int gcb(int a, int b) {
    if (b == 0) return a;
    return gcb(b, a%b);
}

int a, b;
int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
 
    int now = arrayA[0];
    for(int i=1; i<arrayA.size(); i++) {
        now = gcb(now, arrayA[i]);
        if (now==1) break;
    }
    if (now!=1) {
        int i;
        for(i=0; i<arrayB.size(); i++) {
            if (arrayB[i]%now == 0) {
                break;
            }
        }
        if (i == arrayB.size()) answer = now;
    }
    now = arrayB[0];
    for(int i=1; i<arrayB.size(); i++) {
        now = gcb(now, arrayB[i]);
        if (now==1) break;
    }
    if (now!=1) {
        int i;
        for(i=0; i<arrayA.size(); i++) {
            if (arrayA[i]%now == 0) {
                break;
            }
        }
        if (i == arrayA.size()) answer = max(answer, now);
    }
    
    return answer;
}