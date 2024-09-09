#include<iostream>
#include<algorithm>
#include<cmath>  // sqrt 함수를 사용하기 위해 필요
using namespace std;

int main(){
    int arr[1001];
    int cnt = 0;  // 소수의 개수를 셀 변수
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++){
        cin >> arr[i];  // 입력받은 수들을 배열에 저장
    }

    for (int i = 0; i < T; i++){
        bool s = true;  // 각 숫자에 대해 소수인지 여부를 확인할 변수
        
        if (arr[i] == 1) {
            s = false;  // 1은 소수가 아니므로 false로 설정
        } 
        else {
            // 2부터 sqrt(arr[i])까지의 숫자로 나눠봄
            for (int j = 2; j <= sqrt(arr[i]); j++) {
                if (arr[i] % j == 0) {
                    s = false;  // 나누어떨어지면 소수가 아님
                    break;  // 더 이상 검사할 필요 없음
                }
            }
        }

        if (s == true) {  // 소수라면 cnt 증가
            cnt++;
        }
    }

    cout << cnt;  // 소수의 개수 출력
}
