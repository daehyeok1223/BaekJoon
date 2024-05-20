#include<iostream>
using namespace std;
int arr[10001];

int main(){
  int N, X;
  cin >> N >> X;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < N; i++){
    if (X > arr[i]){
      cout << arr[i] << " ";
    }
  }

}