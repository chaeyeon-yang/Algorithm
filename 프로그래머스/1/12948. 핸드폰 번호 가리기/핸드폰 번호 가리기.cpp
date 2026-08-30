#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.size();
    int j = size-4;
    for(int i=0; i<size; i++) {
        if (j == i) {
            answer += phone_number[i];
            j++;
        } else {
            answer += '*';
        }
    }
    return answer;
}