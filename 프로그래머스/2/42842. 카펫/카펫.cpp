#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // yellow 2, brown 10
    // -> y-가로x2, y-세로x2 + 4(모서리) = brown
    // y-가로+2, y-세로+2 => 전체 카펫의 가로, 세로
    // y-가로 x y-세로 = y
    // 가로 >= 세로
    // 2x+2y = 20, x+y=10 // (9,1) (8,2) (7,3) (6,4) (5,5) 
    
    int tmp = (brown-4)/2;
    vector<pair<int, int>> now;
    
    for(int i=1; i<brown; i++) {
        if (i>tmp-i) break;
        if ((tmp-i)*i == yellow)
            now.push_back({tmp-i, i});
    }
    
    answer.push_back(now[0].first+2);
    answer.push_back(now[0].second+2);

    return answer;
}