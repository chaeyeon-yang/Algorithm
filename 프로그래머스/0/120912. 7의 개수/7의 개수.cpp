#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i=0; i<array.size(); i++) {
        string tmp = to_string(array[i]);
        for(char c: tmp) {
            if (c=='7') answer++;
        }
    }
    return answer;
}