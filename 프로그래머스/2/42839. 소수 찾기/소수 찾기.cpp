#include <string>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

// 소수 판별 함수
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// 전역 set: 중복 없이 숫자 저장
set<int> numberSet;

// DFS로 모든 숫자 조합 생성
void dfs(string current, string remaining) {
    if (!current.empty()) {
        numberSet.insert(stoi(current));
    }

    for (int i = 0; i < remaining.size(); ++i) {
        string next = current + remaining[i];
        string new_remaining = remaining.substr(0, i) + remaining.substr(i + 1);
        dfs(next, new_remaining);
    }
}

int solution(string numbers) {
    numberSet.clear(); // 이전 결과 초기화
    dfs("", numbers);

    int count = 0;
    for (int num : numberSet) {
        if (isPrime(num)) count++;
    }

    return count;
}
