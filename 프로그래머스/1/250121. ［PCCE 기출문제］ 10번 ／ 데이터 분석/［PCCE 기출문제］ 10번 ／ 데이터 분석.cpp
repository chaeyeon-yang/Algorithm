#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> x, vector<int> y, int stmp) {
    return x[stmp] < y[stmp];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int tmp = 0;
    if (ext == "date") tmp = 1;
    else if (ext == "maximum") tmp = 2;
    else if (ext == "remain") tmp = 3;
    
    int stmp = 0;
    if (sort_by == "date") stmp = 1;
    else if (sort_by == "maximum") stmp = 2;
    else if (sort_by == "remain") stmp = 3;
    
    for(int i=0; i<data.size(); i++) {
        if (data[i][tmp] < val_ext) answer.push_back(data[i]);
    }
    
    sort(answer.begin(), answer.end(), [stmp](vector<int> x, vector<int> y) {
        return cmp(x, y, stmp);
    });
    
    return answer;
}