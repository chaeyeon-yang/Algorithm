#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    // (0,1) vs (2,3)
    int x1 = dots[0][0] - dots[1][0];
    int y1 = dots[0][1] - dots[1][1];
    int x2 = dots[2][0] - dots[3][0];
    int y2 = dots[2][1] - dots[3][1];
    if (y1 * x2 == y2 * x1) return 1;

    // (0,2) vs (1,3)
    x1 = dots[0][0] - dots[2][0];
    y1 = dots[0][1] - dots[2][1];
    x2 = dots[1][0] - dots[3][0];
    y2 = dots[1][1] - dots[3][1];
    if (y1 * x2 == y2 * x1) return 1;

    // (0,3) vs (1,2)
    x1 = dots[0][0] - dots[3][0];
    y1 = dots[0][1] - dots[3][1];
    x2 = dots[1][0] - dots[2][0];
    y2 = dots[1][1] - dots[2][1];
    if (y1 * x2 == y2 * x1) return 1;

    return 0;
}
