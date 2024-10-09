#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double n, m;
  cin >> n >> m;
  if(n == 1){
    n++;
  }
  for (int i = n; i <= m; i++) {
    int flag = 1;
    int k = round(sqrt(i));
    for (int j = 2; j <= k; j++) {
      if(i % j == 0){
        flag = 0;
        break;
      }
      else{
        flag = 1;
      }
    }
    if (flag == 1) {
      cout << i << '\n';
    }
    flag = 0;
  }
}