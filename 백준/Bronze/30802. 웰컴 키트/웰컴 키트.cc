#include<iostream>
#include<algorithm>
using namespace std;

int arr[10];

int main(){
  int n;
  int T, P;
  int T_cnt = 0;
  int P_cnt = 0;
  cin >> n;
  for (int i = 0; i < 6; i++) {
    cin >> arr[i];
  }
  cin >> T >> P;

  for (int i = 0; i < 6; i++){
    if (arr[i] % T == 0){
      T_cnt += (arr[i] / T);
    }
    else{
      T_cnt += (arr[i] / T) + 1;
    }
    P_cnt += arr[i];
  }
  cout << T_cnt << '\n';
  cout << P_cnt / P << " " << P_cnt % P << '\n';
}
