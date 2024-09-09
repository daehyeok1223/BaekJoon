#include<iostream>
#include<string>
using namespace std;

int arr[200];
int k = 0;

int main(){
  fill_n(arr ,200, - 1);
  string S;
  cin >> S;
  for (int i = 0; i < S.length(); i++) {
    for (int j = 0; j < 26; j++){
      if(S[i] == 'a' + j){
        if(arr[j] != -1){
          k++;
          break;
        }
        arr[j] = k;
        k++;
        break;
      }
    }
  }
  for (int i = 0; i < 26; i++){
    cout << arr[i] << " ";
  }
  cout << '\n';
}

//a : 97, z : 122, 0: 48