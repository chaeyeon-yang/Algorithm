#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if (direction == "right") {
        int tmp = numbers[numbers.size()-1];
        answer.push_back(tmp);
        for(int j=0; j<numbers.size()-1; j++) 
            answer.push_back(numbers[j]);
    } else {
        int tmp = numbers[0];
        for(int j=1; j<numbers.size(); j++) {
            answer.push_back(numbers[j]);
        }
        answer.push_back(tmp);
    }
    return answer;
}