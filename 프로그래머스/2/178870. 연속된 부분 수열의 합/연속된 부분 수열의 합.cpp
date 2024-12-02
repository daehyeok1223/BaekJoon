#include <vector>
#include <climits> // INT_MAX 사용

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2, -1); // [시작 인덱스, 끝 인덱스]
    int left = 0, right = 0, sum = 0;
    int minLength = INT_MAX;

    while (right < sequence.size()) {
        // 부분합 갱신
        sum += sequence[right];

        // 합이 k를 초과하면 왼쪽 포인터 이동
        while (sum > k && left <= right) {
            sum -= sequence[left];
            left++;
        }

        // 합이 정확히 k일 때
        if (sum == k) {
            int currentLength = right - left + 1;
            if (currentLength < minLength) {
                minLength = currentLength;
                answer[0] = left;  // 시작 인덱스
                answer[1] = right; // 끝 인덱스
            }
        }

        // 오른쪽 포인터 확장
        right++;
    }

    return answer;
}
