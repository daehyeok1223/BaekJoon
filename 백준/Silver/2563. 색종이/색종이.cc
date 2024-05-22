#include<iostream>
#include<vector>
using namespace std;

int arr[100][100];
int cnt = 0;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    for (int j = a; j < a + 10; j++){
      for (int k = b; k < b + 10; k++){
        arr[j][k] = 1;
      }
    }
  }
  for (int i = 0; i < 100; i++){
    for (int j = 0; j < 100; j++){
      if(arr[i][j] == 1){
        cnt++;
      }
    }
  }
  cout << cnt;
}