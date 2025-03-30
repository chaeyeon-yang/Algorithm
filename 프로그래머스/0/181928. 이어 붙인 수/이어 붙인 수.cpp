#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string hol = "";
    string zzak = "";
    for(int i: num_list){
        if (i%2!=0) {
            hol += to_string(i);
        } else zzak += to_string(i);
    }
    int ihol = stoi(hol);
    int izzak = stoi(zzak);
    
    answer = ihol+izzak;
    return answer;
}