#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int arr[500001];
int N;
int cnt[8001];
int ans[4000];

void A(){
  double a = 0;
  for (int i = 0; i < N; i++){
    a += arr[i];
  }
  cout << round(a / N) + 0.0 << '\n';
}

void B(){
  sort(arr, arr + N);
  cout << arr[(N - 1) / 2] << '\n';
}

void C(){
  vector<int> v;
  int k = 0;
    
  for (int i = 0; i < N; i++) {
    cnt[arr[i] + 4000]++;  
    k = max(k, cnt[arr[i] + 4000]);
  }

  for (int i = 0; i <= 8000; i++) {
    if(cnt[i] == k){
      v.push_back(i - 4000);  
    }
  }
  if(v.size() == 1){
    cout << v.front() << '\n';
  } 
  else {
    sort(v.begin(), v.end());
    cout << v[1] << '\n';  
  }
}

void D(){
  cout << arr[N - 1] - arr[0] << '\n';
}

int main(){
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  A();
  B();
  C();
  D();
}
