#include <string>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    int t = number.size() - k; // 뽑아야 하는 글자 수
    int start = 0;

    for (int i = 0; i < t; i++) {
        char max_digit = '0';//문자열의 최소로 일단 두기
        int max_index = start;

        for (int j = start; j <= k + i; j++) {
            if (number[j] > max_digit) {
                max_digit = number[j];
                max_index = j;//큰 숫자가 나왔을 때 update
                if (max_digit == '9') break; //9 나오면 어차피 제일 크니까 패스
            }
        }

        answer += max_digit;
        start = max_index + 1; 
    }

    return answer;
}
