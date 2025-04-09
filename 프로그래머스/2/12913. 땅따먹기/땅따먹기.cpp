#include <iostream>
#include <vector>
using namespace std;

int dp [100001][4];

int solution(vector<vector<int> > land)
{
    int answer = 0;
    for(int i = 0; i < 4; i++){
        dp[0][i] = land[0][i];
    }
    for(int i = 1; i < land.size(); i++){
        for(int j = 0; j < 4; j++){//현재 열
            for(int k = 0; k < 4; k++){//이전 열
                if(j != k){
                    dp[i][j] = max(dp[i][j], land[i][j] + dp[i - 1][k]);
                }
            }
        }
        if(i == land.size() - 1){
            for(int k = 0; k < 4; k++){
                answer = max(answer, dp[i][k]);
            }
        }
    }

    return answer;
}