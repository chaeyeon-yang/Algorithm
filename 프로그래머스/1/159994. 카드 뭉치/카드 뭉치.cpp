#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "No";
    int check = 0;
    int tmp1 = 0;
    int tmp2 = 0;
    for(int i=0; i<goal.size(); i++) {
        string now = goal[i];
        if (cards1[tmp1] == now) {
            tmp1++;
            check++;
        }
        if (cards2[tmp2] == now) {
            tmp2++;
            check++;
        }
    }
    if (check == goal.size()) answer = "Yes";
    return answer;
}