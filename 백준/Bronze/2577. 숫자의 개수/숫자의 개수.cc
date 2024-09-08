#include<iostream>
using namespace std;

int arr[10];

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int ans = a * b * c;
  for (int i = ans; i > 0; i/=10){
    arr[i % 10]++;
  }
  for (int i = 0; i < 10; i++){
    cout << arr[i] << '\n';
  }
}