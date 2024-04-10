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
  for (int i = 0; i < T; i++) {
    cin >> n;
    for (int j = 4; j <= n; j++){
        arr[j] = arr[j - 3] + arr[j - 2] + arr[j - 1];
    }
    cout << arr[n] << '\n';
  }
}