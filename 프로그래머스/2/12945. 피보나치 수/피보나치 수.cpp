#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long v[100000];

long long solution(int n) {
    long long answer = 0;
    
    for(long long i=0; i<=n; i++) {
        if (i==0 || i==1){
            v[i] = i;
        } else {
            v[i] = (v[i-1] + v[i-2])%1234567;
        }
    }
    answer = v[n];
    
    return answer;
}