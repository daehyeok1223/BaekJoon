#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
  int N, a, b;
  unordered_map<int, int> arr;
  ios::sync_with_stdio(false);
	cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> a;
    arr[a]++;
  }

  int M;
  cin >> M;
  for (int i = 0; i < M; i++){
    cin >> b;
    cout << arr[b] << " ";
  }
  cout << "\n";
}
