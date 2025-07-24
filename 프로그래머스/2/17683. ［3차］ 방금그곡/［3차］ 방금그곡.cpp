#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

// # 구분
vector<string> hashcontrol(const string& a) {
    vector<string> music_song;
    for (int i = 0; i < a.size(); i++) {
        if (i + 1 < a.size() && a[i + 1] == '#') {
            music_song.push_back(string(1, a[i]) + "#");
            i++; 
        } else {
            music_song.push_back(string(1, a[i]));
        }
    }
    return music_song;
}

bool isMatch(const vector<string>& full, const vector<string>& pattern) {
    if (pattern.size() > full.size()) return false;

    for (int i = 0; i <= full.size() - pattern.size(); i++) {
        bool match = true;
        for (int j = 0; j < pattern.size(); j++) {
            if (full[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }

    return false;
}

int getTime(const string& start, const string& end) {
    int sh = stoi(start.substr(0, 2));
    int sm = stoi(start.substr(3, 2));
    int eh = stoi(end.substr(0, 2));
    int em = stoi(end.substr(3, 2));
    return (eh * 60 + em) - (sh * 60 + sm);
}

string solution(string m, vector<string> musicinfos) {
    string answer = "(None)";
    int max_time = -1;

    vector<string> target = hashcontrol(m);

    for (int i = 0; i < musicinfos.size(); i++) {
        stringstream ss(musicinfos[i]);
        string start, end, title, sheet;
        getline(ss, start, ',');
        getline(ss, end, ',');
        getline(ss, title, ',');
        getline(ss, sheet, ',');

        int playTime = getTime(start, end);

        vector<string> parsedSheet = hashcontrol(sheet);
        vector<string> fullMusic;

        for (int t = 0; t < playTime; t++) {
            fullMusic.push_back(parsedSheet[t % parsedSheet.size()]);
        }

        if (isMatch(fullMusic, target)) {
            if (playTime > max_time) {
                max_time = playTime;
                answer = title;
            }
        }
    }

    return answer;
}
