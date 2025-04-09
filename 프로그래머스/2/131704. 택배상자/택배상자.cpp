#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<int> order) {
    stack<int> s;          // 보조 컨테이너 벨트 (스택)
    int idx = 0;           // order에서 현재 비교할 인덱스
    int box = 1;           // 1번 상자부터 시작

    while (box <= order.size()) {
        s.push(box);       // 현재 상자를 스택에 올림
        // 스택의 top이 현재 원하는 order와 같다면 꺼냄
        while (!s.empty() && s.top() == order[idx]) {
            s.pop();
            idx++;         // 다음 순서로 이동
        }
        box++;             // 다음 상자
    }

    // 마지막까지 스택에 남아있는 상자들도 검사
    while (!s.empty() && s.top() == order[idx]) {
        s.pop();
        idx++;
    }

    return idx;  // 최종으로 처리한 상자 개수
}
