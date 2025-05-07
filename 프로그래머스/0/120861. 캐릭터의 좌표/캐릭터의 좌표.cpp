#include <string>
#include <vector>

using namespace std;

// [0, 0]
// [1, 0]
// [1, 1]
// [2, 1]

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    
    pair<int, int> b = {0, 0};
    int garo = (board[0]-1)/2;
    int sero = (board[1]-1)/2;

    
    for(int i=0; i<keyinput.size(); i++) {
        if (keyinput[i] == "left") {
            if(b.first-1 < -garo) continue;
            b.first = b.first-1;
        }
        if (keyinput[i] == "right") {
            if(b.first+1 > garo) continue;
            b.first = b.first+1;
        }
        if (keyinput[i] == "up") {
            if(b.second+1 > sero) continue;
            b.second = b.second+1;
        }
        if (keyinput[i] == "down") {
            if(b.second-1 < -sero) continue;
            b.second = b.second-1;
        }
    }
    answer.push_back(b.first);
    answer.push_back(b.second);

    return answer;
}