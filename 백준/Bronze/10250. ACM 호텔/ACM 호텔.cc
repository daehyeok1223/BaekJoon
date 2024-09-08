#include<iostream>
using namespace std;

int main(){
  int m, n, l;
  int k;
  cin >> k;
  for (int i = 0; i < k; i++){
    cin >> m >> n >> l;
    int a = l / m + 1;
    int b = l % m;
    if(b == 0){
      b = m;
      a = l / m;
    }

    cout << b * 100 + a << '\n';
  }
  return 0;
}