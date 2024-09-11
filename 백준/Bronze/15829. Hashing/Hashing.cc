#include<iostream>
#include<string>
#include<math.h>
using namespace std;

long long M = 1234567891;

int main(){
    int N;
    long long ans = 0;
    long long r = 1;  // 31^i 값을 저장할 변수
    cin >> N;
    string s;
    cin >> s;

    for (int i = 0; i < N; i++){
        int value = s[i] - 'a' + 1; // 'a'부터 시작하는 알파벳 값 계산
        ans = (ans + (value * r) % M) % M;  // 모듈러 연산 적용
        r = (r * 31) % M;  // 31의 i승을 모듈러 연산 적용하여 계산
    }

    cout << ans;
}
