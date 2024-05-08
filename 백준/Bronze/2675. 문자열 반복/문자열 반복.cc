#include<iostream>
#include<string>
using namespace std;

string S;

int main(){
  int N;
  cin >> N;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a >> S;
    for (int j = 0; j < S.length(); j++){
      for (int k = 0; k < a; k++){
        cout << S[j];
      }
    }
    cout << '\n';
  }
}
  