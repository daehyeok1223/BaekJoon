#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int dp[1000001];
int visited[1000001];

int solution(int x, int y, int n) {
    int answer = 0;
    dp[x] = 0;
    visited[x] = 1;
    for(int i = x + 1; i <= y; i++){
        dp[i] = INT_MAX;
    }
    for(int i = x; i <= y; i++){
        if(i + n <= y && visited[i] == 1){
            dp[i + n] = min(dp[i + n], dp[i] + 1);
            visited[i + n] = 1;
        }
        if(i * 2 <= y && visited[i] == 1){
            dp[i * 2] = min(dp[i * 2], dp[i] + 1);
            visited[i * 2] = 1;
        }
        if(i * 3 <= y && visited[i] == 1){
            dp[i * 3] = min(dp[i * 3], dp[i] + 1);
            visited[i * 3] = 1;
        } 
    }
    answer = dp[y];
    if(visited[y] == 1){
        return answer;
    }
    else{
        answer = -1;
        return answer;
    }

}