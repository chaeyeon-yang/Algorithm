#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int now = 0;
    
    for(int i=0; i<k; i++) {
        if (i==0) {
            answer = numbers[i];
        }
        else {
            answer = numbers[(now+2)%numbers.size()];
            now = (now+2)%numbers.size();
        }
    }
    
    
    return answer;
}