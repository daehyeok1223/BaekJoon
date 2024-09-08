#include<iostream>
#include<string>
using namespace std;

string s;
int arr[101]; // 배열은 여전히 101로 유지

void decide(string k){
  int ans = 0; // ans 변수를 매 함수 호출마다 초기화
  
  if(k[0] == 'O'){
    arr[0] = 1;
  }
  else{
    arr[0] = 0;
  }
  
  for (int i = 1; i < k.length(); i++) {
    if(k[i] == 'X'){
      arr[i] = 0;
    } 
    else if(k[i] == 'O' && k[i - 1] == 'O') {
      arr[i] = arr[i - 1] + 1;
    }
    else if(k[i] == 'O' && k[i - 1] != 'O'){
      arr[i] = 1;
    }
  }

  // k.length() 만큼만 출력
  for (int i = 0; i < k.length(); i++){ 
    ans += arr[i];
  }

  cout << ans << '\n';  // ans 값 출력
}

int main(){
  int a;
  cin >> a;
  
  for (int i = 0; i < a; i++){
    cin >> s;
    decide(s);  // 각 문자열에 대해 decide 함수 호출
  }
}
