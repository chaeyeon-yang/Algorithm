#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> mp;
    vector<tuple<string, int, int>> v;
    for(int i=0; i<genres.size(); i++) {
        mp[genres[i]] += plays[i];
        v.push_back({genres[i], plays[i], i});
    }
    sort(v.begin(), v.end(), [&](auto& a, auto& b) {
        string genreA = get<0>(a), genreB = get<0>(b);
        int playA = get<1>(a), playB = get<1>(b);
        int indexA = get<2>(a), indexB = get<2>(b);
        if (mp[genreA] != mp[genreB]) return mp[genreA] > mp[genreB];
        if (playA != playB) return playA > playB;
        return indexA < indexB;
    });
    map<string, int> cnt;
    for(auto& a: v) {
        cnt[get<0>(a)]++;
        if (cnt[get<0>(a)] > 2) continue;
        answer.push_back(get<2>(a));
    }
    
    return answer;
}