#include<iostream>
using namespace std;

int main() {
  int x;
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    cin >> x;
    sum += x * x;  // 입력받은 값을 제곱하여 더하기
    }
    
    cout << sum % 10;  // 최종 결과 출력
    return 0;
}
