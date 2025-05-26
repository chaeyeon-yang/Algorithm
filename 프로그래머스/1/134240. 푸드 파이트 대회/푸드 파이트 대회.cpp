#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string tmp = "";
    for(int i=1; i<food.size(); i++) {
        if (food[i]%2==0) {
            for(int j=0; j<food[i]/2; j++) {
                tmp += to_string(i);
            }
        } else {
            for(int j=0; j<food[i]/2; j++) {
                tmp += to_string(i);
            }
        }
    }
    answer += tmp;
    answer += "0";
    sort(tmp.rbegin(), tmp.rend());
    answer += tmp;
    return answer;
}