#include<iostream>
#include<algorithm>
using namespace std;

int arr[1001];
int arr1[1001];
int sum = 0;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  sort(begin(arr), begin(arr) + N);
  arr1[0] = arr[0];
  arr1[1] = arr[0] + arr[1];
  for (int i = 2; i < N; i++) {
    arr1[i] = arr1[i - 1] + arr[i];
  }
  for (int i = 0; i < N; i++){
    sum += arr1[i];
  }
  cout << sum;
}