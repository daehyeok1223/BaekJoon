#include<iostream>
#include<vector>
using namespace std;

vector<int> v[100001];
bool visited[100001];
int arr[100001];

void dfs(int a){
  visited[a] = true;
  for (int i = 0; i < v[a].size(); i++){
    int ans = v[a][i];
    if (visited[ans] == false){
      arr[ans] = a;
      dfs(ans);
    }
  }
}

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N -1; i++){
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  dfs(1);

  for (int i = 2; i <= N; i++){
    cout << arr[i] << '\n';
  }
}