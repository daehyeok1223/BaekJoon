#include <iostream>
#include <algorithm>

using namespace std;

int N,M;
int arr1[1000];
int arr2[1000];

int main() {
  int sum = 0;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> arr1[i];
  }
  sort(arr1, arr1 + N);

  for (int i = 0; i < N; i++) {
    cin >> arr2[i];
  }
  sort(arr2, arr2 + N);

  for (int i = 0; i < N; i++) {
    sum = sum + arr1[i] * arr2[N -1 - i];
  }

  cout << sum;

  return 0;
}