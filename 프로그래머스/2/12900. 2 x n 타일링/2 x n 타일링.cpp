#include <string>
#include <vector>

using namespace std;

int dp[60001];

int solution(int n) {
    int answer = 0;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i - 2] % 1000000007 + dp[i - 1] % 1000000007) % 1000000007;
    }
    answer = dp[n];
    return answer;
}