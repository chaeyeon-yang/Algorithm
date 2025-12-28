#include <string>
#include <vector>
#include <iostream>

using namespace std;

int bingoCnt(const vector<string>& board, char c) {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (board[i][0]==c && board[i][1]==c && board[i][2]==c) cnt++;
        if (board[0][i]==c && board[1][i]==c && board[2][i]==c) cnt++;
    }
    if (board[0][0]==c && board[1][1]==c && board[2][2]==c) cnt++;
    if (board[0][2]==c && board[1][1]==c && board[2][0]==c) cnt++;
    return cnt;
}

int solution(vector<string> board) {
    int answer = 0;
    
    int cnt_o = 0;
    int cnt_x = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if (board[i][j] == 'O') {
                cnt_o++;
            } else if (board[i][j] == 'X') {
                cnt_x++;
            }
        }
    }
    if (cnt_o != cnt_x && cnt_o != cnt_x+1) return 0;
    
    int xBingo = bingoCnt(board, 'X');
    int oBingo = bingoCnt(board, 'O');
    
    if (xBingo && oBingo) return 0;
    if (xBingo && cnt_x != cnt_o) return 0;
    if (oBingo && cnt_x+1 != cnt_o) return 0;

    return 1;
    
    
    return answer;
}