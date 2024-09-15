#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  else{
    return a.second < b.second;
  }
}

int main(){
  int N;
  vector<pair<int, int> > V;
  int x, y;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> x >> y;
    V.push_back(make_pair(x, y));
  }
  sort(V.begin(), V.end(), compare);
  for (int i = 0; i < N; i++){
    cout << V[i].first << " " << V[i].second << '\n';
  }
}

