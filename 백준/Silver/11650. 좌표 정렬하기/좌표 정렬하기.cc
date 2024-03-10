#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
};

bool comparePoints(const Point& p1, const Point& p2) {
    if (p1.x < p2.x)
        return true;
    else if (p1.x == p2.x)
        return p1.y < p2.y;
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false); // C++ 입출력 속도 향상
    cin.tie(NULL); // C++ 버퍼 비우기

    int N;
    cin >> N;

    vector<Point> points(N);

    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points.begin(), points.end(), comparePoints);

    for (int i = 0; i < N; ++i) {
        cout << points[i].x << " " << points[i].y << '\n'; // endl 대신에 '\n' 사용
    }

    return 0;
}