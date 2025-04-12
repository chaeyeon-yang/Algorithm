#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 2;
    int mx = *max_element(sides.begin(), sides.end());
    int s = 0;
    bool skipped = false;
    for(int i=0; i<sides.size(); i++) {
        if (!skipped && sides[i] == mx) {
            skipped = true; 
            continue;
        }
        s += sides[i];
    }
    if (s>mx) answer = 1;

    return answer;
}