#include<iostream>
using namespace std;

int main() {
	int H, W, M, N;
	cin >> H >> W >> M >> N;
	int x = H;
	int ans1 = 0;
	int ans2 = 0;
	while (x > 0) {
		x -= (M + 1);
		ans1++;
	}
	int y = W;
	while (y > 0) {
		y -= (N + 1);
		ans2++;
	}
	cout << ans1 * ans2;
}