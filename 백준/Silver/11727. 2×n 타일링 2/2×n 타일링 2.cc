#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int dp[1000];
	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2; i < N; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2)%10007;
	}
	cout << dp[N-1];




	return 0;
}