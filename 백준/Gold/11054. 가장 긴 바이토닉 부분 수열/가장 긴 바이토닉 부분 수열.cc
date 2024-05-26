#include<iostream>
using namespace std;

int arr[1001];
int dp_i[1001];
int dp_d[1001];
int temp;

void Increase(int N){
  for (int i = 1; i < N; i++){
    for (int j = 0; j < i; j++){
      if(arr[i] > arr[j]){
        dp_i[i] = max(dp_i[i], dp_i[j] + 1);
      }
    }      
  }
  
}

void Decrease(int N){
  for (int i = N - 2; i >= 0; i--){
    for (int j = i + 1; j < N; j++){
      if(arr[i] > arr[j]){
        dp_d[i] = max(dp_d[i], dp_d[j] + 1);
      }
    }
  }
}

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < N; i++) {
    dp_i[i] = 1;
    dp_d[i] = 1;
  }
  
  Increase(N);
  Decrease(N);

  for (int i = 0; i < N; i++){
    if(temp < dp_i[i] + dp_d[i]){
      temp = dp_i[i] + dp_d[i];
    }
  }
  cout << temp - 1;
}