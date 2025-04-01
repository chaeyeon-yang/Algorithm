#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int bi = 0;
    vector<int> tmp;
    for(int i=1;i<common.size(); i++) {
        tmp.push_back(common[i]-common[i-1]);
    }
    for(int i=1; i<tmp.size(); i++) {
        if (tmp[i]-tmp[i-1] == 0) {
            bi = tmp[i];
            answer = common[common.size()-1] + bi;
            break;
        } else {
            bi = tmp[i]/tmp[i-1];
            answer = common[common.size()-1] * bi;
            break;
        }
    }
    return answer;
}