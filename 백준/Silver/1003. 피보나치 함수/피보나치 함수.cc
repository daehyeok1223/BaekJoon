#include<iostream>

using namespace std;

int main() {
  int arr0[50] = {1,0,};
  int arr1[50] = {0,1,};
  int N;
  int n;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> n;
    for (int j = 2; j <= n; j++){
      arr0[j] = arr0[j - 1] + arr0[j - 2];
      arr1[j] = arr1[j - 1] + arr1[j - 2];
    }
    cout << arr0[n] << " " << arr1[n] << '\n';
  }
  return 0;
}
