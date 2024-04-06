#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int distance(string a, string b){
  int cnt = 0;
  for (int i = 0; i < 4; i++) {
    if(a[i] != b[i]){
      cnt++;
    }
  }
  return cnt;
}  // 두개의 엠비티아이의 거리를 구하는 함수

int main(){
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    vector<string> s;
    int a;
    cin >> a;
    for (int j = 0; j < a; j++){
      string n;
      cin >> n;
      s.push_back(n);
    }
    if(a > 32){
      cout << "0" << '\n';
      continue;
    }
    int num = 1000;
    for (int i = 0; i < a - 2; i++) {
      for (int j = i + 1; j < a - 1; j++) {
        for (int k = j + 1; k < a; k++) {
          num = min(num, distance(s[i], s[j]) + distance(s[j], s[k]) + distance(s[i], s[k]));
        }
      }
    }
    cout << num << '\n';
  }
}