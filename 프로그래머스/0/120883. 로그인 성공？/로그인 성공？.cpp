#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    string id = id_pw[0];
    string pw = id_pw[1];

    for(int i=0; i<db.size(); i++) {
        vector<string> now = db[i];
        if (now[0] == id && now[1] == pw) {
            answer = "login";
            break;
        }
        else if (now[0] == id && now[1]!=pw) {
            answer = "wrong pw";
        }
    }
    return answer;
}