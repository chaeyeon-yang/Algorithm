#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    typedef long long ll;
    ll answer = 0;
    if (a < b) {
        for(ll k=a; k<=b; k++) {
            answer+=k;
        }
    } else {
        for(ll k=b; k<=a; k++) {
            answer+=k;
        }
    }
    
    return answer;
}