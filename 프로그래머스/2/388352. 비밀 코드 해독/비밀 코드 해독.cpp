#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 1~n까지 서로 다른 5개의 정수
int save_num[5];

// 정답 개수
int answer;

void combination(int depth,int cur,int n, vector<vector<int>> &q, vector<int> &ans){
    if(depth==5){
        // 비밀 코드 포함 개수 확인
        int cnt_secret[10]={0,};
        for(int i=0;i<q.size();i++){
            int cnt_temp=0;
            for(int j=0;j<5;j++){
                for(int k=0;k<5;k++){
                    if(save_num[k]==q[i][j]){
                        cnt_temp++;
                    }
                }
            }
            cnt_secret[i]=cnt_temp;
        }
        // ans 배열의 값과 동일하다면 정답 추가
        bool check=true;
        for(int i=0;i<q.size();i++){
            if(cnt_secret[i]!=ans[i]){
                check=false;
                break;
            }
        }
        
        if(check)answer++;
        return;
    }
    
    for(int i=cur;i<=n;i++){
        save_num[depth]=i;
        combination(depth+1, i+1, n, q, ans);
    }
}

int solution(int n, vector<vector<int>> q, vector<int> ans) {
    answer=0;
    combination(0, 1, n, q,ans);
    return answer;
}