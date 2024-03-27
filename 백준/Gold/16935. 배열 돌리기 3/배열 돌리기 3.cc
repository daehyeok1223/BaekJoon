#include<iostream>

using namespace std;

int arr[100][100];
int temp[100][100];
int N, M, K; // 세로의 개수를 N, 가로의 개수를 M이라고 하자.

void swap1(){
  for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			arr[i][j] = temp[i][j];
		}
	}
} //복사한 배열 다시 넣어주기.

void swap2(){
  for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			arr[i][j] = temp[i][j];
		}
	}
}

void S1() {
   for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      temp[i][j] = arr[N - 1 - i][j];
    }
  }
  swap1();
} // 검증 완료.

void S2(){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      temp[i][j] = arr[i][M - 1 - j];
    }
  }
  swap1();
} //검증 완료.

void S3(){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      temp[j][i] = arr[N - i - 1][j];
    }
  }
  swap2();
}//검증완료, 출력할 때 바꿔서 출력

void S4(){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      temp[j][i] = arr[i][M - j - 1];
    }
  }
  swap2();
}//검증 완료, 출력할 때 바꿔서 출력

void S5(){
  for (int i = 0; i < N/2; i++){
    for (int j = 0; j < M/2; j++){
      temp[i][j] = arr[N / 2 + i][j];
    }
  }
  for (int i = 0; i < N/2; i++){
    for (int j = M/2; j < M; j++){
      temp[i][j] = arr[i][j - M / 2];
    }
  }
  for (int i = N/2; i < N; i++){
    for (int j = 0; j < M/2; j++){
      temp[i][j] = arr[i][j + M / 2];
    }
  }
  for (int i = N/2; i < N; i++){ //2
    for (int j = M/2; j < M; j++){ //3
      temp[i][j] = arr[i - N / 2][j];
    }
  }
  swap1();
} //검증 완료.

void S6(){
  for (int i = 0; i < N/2; i++){
    for (int j = 0; j < M/2; j++){
      temp[i][j] = arr[i][j + M / 2];
    }
  }
  for (int i = 0; i < N/2; i++){
    for (int j = M/2; j < M; j++){
      temp[i][j] = arr[i + N / 2][j];
    }
  }
  for (int i = N/2; i < N; i++){
    for (int j = 0; j < M/2; j++){
      temp[i][j] = arr[i - N / 2][j];
    }
  }
  for (int i = N/2; i < N; i++){ //2
    for (int j = M/2; j < M; j++){ //3
      temp[i][j] = arr[i][j - M / 2];
    }
  }
  swap1();
}//검증 완료

int main(){
  cin >> N >> M >> K;
  int n;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < K; i++){
    cin >> n;
    if(n==1){
      S1();
    }
    else if(n==2){
      S2();
    }
    else if(n==3){
      S3();
      int a = N;
      N = M;
      M = a;
    } 
    else if (n == 4) {
      S4();
      int a = N;
      N = M;
      M = a;
    } 
    else if (n == 5) {
      S5();
    } 
    else if (n == 6) {
      S6();
    }
  }

  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}
