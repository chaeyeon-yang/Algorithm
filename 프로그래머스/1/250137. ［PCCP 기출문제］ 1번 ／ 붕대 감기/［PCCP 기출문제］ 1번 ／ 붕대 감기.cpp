#include <string>
#include <vector>
#include <iostream>
 
using namespace std;
 
int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int hp = health;
    
    int bandageCnt = 0; 
    int monsterTime = attacks[0][0]; 
    int monsterAttack = attacks[0][1]; 
    
    int mCnt = 0; //몬스터 배열 접근
    
    for(int i = 1; i <= attacks[attacks.size() -1][0]; i++) {
        if(monsterTime == i) { //몬스터가 공격할 차례일 때
            bandageCnt = 0;
            hp -= monsterAttack;
            if(hp <= 0) return -1;
            
            if(mCnt + 1 < attacks.size()) {
                mCnt++;
                monsterTime = attacks[mCnt][0];
                monsterAttack = attacks[mCnt][1];
            }            
        }
        else {
            bandageCnt++;
            hp += bandage[1];
            if(bandageCnt == bandage[0]) {
                bandageCnt = 0;
                hp += bandage[2];
            }
            if(hp > health) hp = health; 
        }
    }
    
    return hp;
}