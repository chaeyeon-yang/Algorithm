#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int ma = max(sides[0], sides[1]);
    int mi = min(sides[0], sides[1]);
    
    for(int i = ma - mi + 1; i < ma + mi; i++) {
        answer++;
    }
    return answer;
}