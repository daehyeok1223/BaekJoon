#include<iostream>
using namespace std;

long long combination(int n, int k) {
    if (k > n - k) k = n - k;  
    long long ans = 1;
    for (int i = 0; i < k; ++i) {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;

    cout << combination(b, a) << '\n';
  }
  return 0;
}