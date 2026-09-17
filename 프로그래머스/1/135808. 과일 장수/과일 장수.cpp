#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    // 사과 1점 ~ k점
    // 한 상자에 사과 m개씩 담아 포장
    // 상자에 담긴 사과 중 가장 낮은 점수가 p 점인 경우 가격은 p*m
    // 가능한 많은 사과를 팔았을 때 얻을 수 있는 최대 이익
    
    sort(score.rbegin(), score.rend());
    for(int i=0; i<score.size(); i+=m) {
        if (score.size()-i < m) break;
        answer += score[i+m-1]*m;
    }
    
    return answer;
}