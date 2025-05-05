#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int a=i; a<=j; a++) {
        string tmp = to_string(a);
        for(int b=0; b<tmp.size(); b++) {
            if (tmp[b]-'0' == k) answer++;
        }
    }
    return answer;
}