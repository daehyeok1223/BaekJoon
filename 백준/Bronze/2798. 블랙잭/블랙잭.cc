#include<iostream>
#include<algorithm>
using namespace std;

int arr[101];

int main(){
  int N, M;
  cin >> N >> M;
  int cnt = 0;

  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }

  for (int i = 0; i < N; i++){
    for (int j = i + 1; j < N; j++){
      for (int k = j + 1; k < N; k++){
        if(arr[i] + arr[j] + arr[k] <= M)
        cnt = max(cnt, arr[i] + arr[j] + arr[k]);
      }
    }
  }
  cout << cnt;
}