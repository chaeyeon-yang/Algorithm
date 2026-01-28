#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int column;

// 2차원 함수 정렬
bool cmp(const vector<int> &a, const vector<int> &b) {
    if (a[column] == b[column]) {
        return a[0] > b[0] ? true: false;
    } else {
        return a[column] < b[column] ? true: false;
    }
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    int answer = 0;
    column = col-1;
    sort(data.begin(), data.end(), cmp);
    
    for(int i=row_begin-1; i<row_end; i++) {
        vector<int> now = data[i];
        int sr = 0;
        for(int j=0; j<now.size(); j++) {
            sr += now[j]%(i+1);
        }
        answer ^= sr;
    }

    return answer;
}