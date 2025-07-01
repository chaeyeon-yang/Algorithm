#include <string>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int dist(pair<int, int> a, pair<int, int> b) { 
    return abs(a.first-b.first) + abs(a.second-b.second);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    char m[4][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};
    
    pair<int, int> lh = {3,0};
    pair<int, int> rh = {3,2};
    for(int k: numbers) {
        for(int i=0; i<4; i++) {
            for(int j=0; j<3; j++) {
                if (m[i][j] == k+'0') {
                    if (k==1 || k==4 || k==7) {
                        answer +='L';
                        lh = {i, j};
                    }
                    else if (k==3 || k==6 || k==9) {
                        answer +='R';
                        rh = {i, j};
                    } else {
                        int tmp1 = dist(lh, {i,j});
                        int tmp2 = dist(rh, {i,j});
                        if (tmp1 < tmp2) {
                            answer += 'L';
                            lh = {i, j};
                        };
                        if (tmp1 > tmp2) {
                            answer += 'R';
                            rh = {i, j};
                        };
                        if (tmp1 == tmp2) {
                            if (hand == "right") {
                                answer += 'R';
                                rh = {i, j};
                            };
                            if (hand == "left") {
                                answer += 'L';
                                lh = {i, j};
                            };
                        }
                    }
                    break;
                }
            }
        }
    }
    return answer;
}