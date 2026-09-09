#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> make2Num(vector<int>& num, int n) {
    vector<string> now;
    for (int i = 0; i < num.size(); i++) {
        int tmp = num[i];
        string mod = "";
        if (tmp == 0) {
            mod = "0";
        } else {
            while (tmp > 0) {
                mod += to_string(tmp % 2);
                tmp /= 2;
            }
        }
        reverse(mod.begin(), mod.end());
        if (mod.size() < n) {
            mod = string(n - mod.size(), '0') + mod;
        }
        now.push_back(mod);
    }
    return now;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    // 10진수 -> 2진수
    vector<string> arr1Res = make2Num(arr1,n);
    vector<string> arr2Res = make2Num(arr2,n);
    
    for(int i=0; i<n; i++) {
        string gido = "";
        for(int j=0; j<n; j++) {
            if (arr1Res[i][j] == '1' || arr2Res[i][j] == '1') {
                gido += "#";
            } else {
                gido += " ";
            }
        }
        answer.push_back(gido);
    }
    return answer;
}