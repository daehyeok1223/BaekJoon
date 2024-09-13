#include<iostream>
#include<algorithm>
using namespace std;

int arr[10001];

int main(){
  int N;
  cin >> N;
  int a;
  for (int i = 1; i <= N; i++) {
    cin >> a;
    arr[a]++;
  }
  for (int i = 1; i <= 10000; i++){
    while(arr[i] > 0){
      cout << i << '\n';
      arr[i]--;
    }
  }
}