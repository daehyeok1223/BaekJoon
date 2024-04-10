#include<iostream>

using namespace std;

int arr[20];

int main(){
  int T;
  int n;
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 4;
  cin >> T;
  for (int i = 4; i < 11; i++){
    arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
  }
    for (int i = 0; i < T; i++) {
      cin >> n;

    cout << arr[n] << '\n';
  }
}