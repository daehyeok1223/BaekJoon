#include<iostream>
#include<string>
using namespace std;

int LCS[1001][1001];
string A;
string B;

int main(){
  cin >> A >> B;
  
  for (int i = 0; i <= A.length(); i++){
    for (int j = 0; j <= B.length(); j++){
      if (i == 0 || j == 0){
        LCS[i][j] = 0;
      }
      else if(A[i-1] == B[j-1]){
        LCS[i][j] = LCS[i - 1][j - 1] + 1;
      }
      else{
        LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
      }
    }
  }
  cout << LCS[A.length()][B.length()];
}
  