#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, result;
    cin >> N >> M;

    vector<int> v;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end()); // 나무 높이 정렬

    int low = 0;              // 톱 최소 높이
    int high = v[N - 1];      // 가장 큰 나무 높이
    int mid;

    while (low <= high) {
        long long answer = 0; // 톱질로 얻은 나무 길이 합
        mid = (low + high) / 2;

        for (int i = 0; i < N; i++) {
            if (v[i] > mid) {
                answer += (v[i] - mid);
            }
        }

        if (answer >= M) { // 필요한 나무 길이 이상이면
            result = mid;  // 현재 톱 높이를 기록
            low = mid + 1; // 더 높은 톱 높이를 탐색
        } else { // 필요한 나무 길이보다 적으면
            high = mid - 1; // 톱 높이를 낮춘다.
        }
    }

    cout << result; // 최적 톱 높이 출력
    return 0;
}
