#include<iostream>
#include<vector>

using namespace std;


vector<vector<int> > fdp;

int main(){
  int T;
  int k, n;
  int cnt = 0;
  cin >> T;
  for (int i = 0; i < T; i++){
    cin >> k >> n;
    vector<vector<int> > fdp(k+1, vector<int>(n+1, 0));

    for (int j = 0; j <= k; j++){
      for (int m = 1; m <= n; m++) {
        if (j != 0) {
          fdp[j][m] = fdp[j - 1][m] + fdp[j ][m - 1];
        } else {
          fdp[j][m] = m;
        }
      }
    }
    //cout << cnt;
    cout << fdp[k][n] << '\n';
  }

  return 0;
}