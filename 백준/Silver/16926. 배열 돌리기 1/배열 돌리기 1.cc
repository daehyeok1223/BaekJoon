#include <iostream>

using namespace std;

int M, N,K;
int arr[500][500];

void Spin() {
  int temp[500][500]; //arr를 복제한 배열

  for (int i = 0; i < min(M,N)/2; i++) {
    int fx = i;
    int fy = i;
    int lx = M - 1 - i;
    int ly = N- 1 - i;

    for (int i = ly - 1; i >= fy; i--){
      temp[fx][i] = arr[fx][i + 1];
    }
    for (int i = fx + 1; i <= lx; i++){
      temp[i][fy] = arr[i - 1][fy];
    }
    for (int i = fy + 1; i <= ly; i++) {
      temp[lx][i] = arr[lx][i - 1];
    }
    for (int i = lx - 1; i >= fx; i--) {
      temp[i][ly] = arr[i + 1][ly];
    }
  }
  for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++){
        arr[i][j] = temp[i][j];
      }  
  }
}

int main() {

  cin >> M >> N >> K;

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++){
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < K; i++){
    Spin();
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++){
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}