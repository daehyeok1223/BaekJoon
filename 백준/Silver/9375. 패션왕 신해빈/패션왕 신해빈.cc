#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int result = 1;
    unordered_map<string, int> m;
    int a;
    cin >> a;
    for (int j = 0; j < a; j++){
        string a,b; //b가 key, a가 value
        cin >> a >> b;
        if (m.find(b) == m.end()) {  // b가 존재하지 않으면
          m.insert({b, 1});
        } else {
          m[b]++;
        }
    }
    unordered_map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++){
      result *= (it->second + 1);
    }
    cout << result - 1 << '\n';
  }
}
