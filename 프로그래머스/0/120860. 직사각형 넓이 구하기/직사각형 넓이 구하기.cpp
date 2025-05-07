#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int garo1 = -300;
    int garo2 = -300;
    int sero1 = -300;
    int sero2 = -300;
    for(int i=0; i<dots.size(); i++) {
        if (garo1 == -300) garo1 = dots[i][0];
        if (garo1 != -300 && dots[i][0] != garo1) garo2 = dots[i][0];
        if (sero1 == -300) sero1 = dots[i][1];
        if (sero1 != -300 && dots[i][1] != sero1) sero2 = dots[i][1];
    }
    int answer = abs(garo1-garo2)*abs(sero1-sero2);
    
    return answer;
}