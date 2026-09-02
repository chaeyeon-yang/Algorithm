#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> garos;
    vector<int> seros;
    // 한 쪽으로 몰기
    for(int i=0; i<sizes.size(); i++) {
        int garo = sizes[i][0];
        int sero = sizes[i][1];
        if (sizes[i][0] >= sizes[i][1]) {
            garos.push_back(sizes[i][0]);
            seros.push_back(sizes[i][1]);
        } else {
            garos.push_back(sizes[i][1]);
            seros.push_back(sizes[i][0]);
        }
    }
    sort(garos.rbegin(), garos.rend());
    sort(seros.rbegin(), seros.rend());
    // cout << garos[0] << " " << seros[0] << "\n";
    answer = garos[0]*seros[0];
    return answer;
}