#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int gop = 1;
    int zegop = 0;
    for(int n: num_list) {
        gop *= n;
        zegop += n;
    }
    if (gop < zegop*zegop) answer = 1;
    return answer;
}