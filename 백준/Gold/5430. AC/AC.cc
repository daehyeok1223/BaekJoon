#include <iostream>
#include <deque>
#include <string>
using namespace std;

void processCommands(string commands, deque<int>& dq) {
    bool isReversed = false; // 뒤집혔는지 여부를 나타내는 플래그

    for (char command : commands) {
        if (command == 'R') {
            isReversed = !isReversed; // 뒤집기 상태 토글
        } else if (command == 'D') {
            if (dq.empty()) {
                cout << "error" << '\n';
                return; // 에러 시 함수 종료
            }

            // isReversed 상태에 따라 앞쪽 또는 뒤쪽에서 제거
            if (isReversed) {
                dq.pop_back();
            } else {
                dq.pop_front();
            }
        }
    }

    // 최종 결과 출력
    cout << "[";
    if (isReversed) {
        for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
            if (it != dq.rbegin()) cout << ",";
            cout << *it;
        }
    } else {
        for (auto it = dq.begin(); it != dq.end(); ++it) {
            if (it != dq.begin()) cout << ",";
            cout << *it;
        }
    }
    cout << "]" << '\n';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string commands, arrayStr;
        int n;

        cin >> commands >> n >> arrayStr;

        deque<int> dq;
        string num = "";

        // 배열에서 숫자 파싱
        for (char ch : arrayStr) {
            if (isdigit(ch)) {
                num += ch;
            } else if (!num.empty()) {
                dq.push_back(stoi(num));
                num = "";
            }
        }

        // 명령어 처리
        processCommands(commands, dq);
    }

    return 0;
}
