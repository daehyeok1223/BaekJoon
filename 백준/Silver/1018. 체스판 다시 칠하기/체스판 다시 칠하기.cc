#include<iostream>
using namespace std;

char arr[50][50];
int N, M;

char arrW[8][8] = {
    'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
};

char arrB[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};
//두 개의 체스판 설정

int main(){
  int cnt1;
  int cnt2;
  int cnt = 100;
  int ans = 0;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++){
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i <= N - 8; i++) {
    for (int j = 0; j <= M - 8; j++){
      cnt1 = 0;
      cnt2 = 0;
      for (int k = 0; k <= 7; k++) {
        for (int l = 0; l <= 7; l++){
          if(arr[i + k][j + l] != arrW[k][l]){
            cnt1++;
          }
          else if(arr[i + k][j + l] != arrB[k][l]){
            cnt2++;
          }
        }
      }
      ans = min(cnt1, cnt2);
      if (ans < cnt) {
        cnt = ans;
      }
    }
  }
  cout << cnt;
}


