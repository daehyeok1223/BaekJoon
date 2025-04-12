#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxGaro = 0;  // 가로 최대값
    int maxSero = 0;  // 세로 최대값

    for (auto size : sizes) {
        // 돌려서 항상 큰 값을 가로로, 작은 값을 세로로
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);

        maxGaro = max(maxGaro, w);
        maxSero = max(maxSero, h);
    }

    return maxGaro * maxSero;
}
