#include <string>
#include <vector>

using namespace std;

string AEIOU = "AEIOU";
int answer = 0;
string target;
bool found = false;

void DFS(string s) {
    if (s == target) {
        found = true;
        return;
    }

    if (s.size() == 5) return;

    for (int i = 0; i < 5; i++) {
        if (found) return; // 찾았으면 더 이상 탐색 안 함

        string next = s + AEIOU[i];
        answer++;
        DFS(next);
    }
}

int solution(string word) {
    target = word;
    DFS("");
    return answer;
}
