#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    int s = 0;
    for(int i: numbers) {
        s+=i;
        if (s>n) {
            answer = s;
            break;
        }
    }
    return answer;
}