#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> mp;
    for(int i=0; i<name.size(); i++) {
        mp[name[i]] = yearning[i];
    }
    
    for(int i=0; i<photo.size(); i++) {
        int chuak = 0;
        for(string person: photo[i]) {
            if (mp.contains(person)) {
                chuak += mp[person];
            }
        }
        answer.push_back(chuak);
    }
    return answer;
}