#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int parent[10001];//각 정점의 개수에 대한 부모노드를 저장한다.
int find(int x){
  if(parent[x] == x){
    return x;
  }
  else{
    return parent[x] = find(parent[x]);
  }//x의 부모를 찾는 함수
}
void uni(int x, int y){
  x = find(x);
  y = find(y);
  parent[y] = x;
}//합치는 함수

int sameparent(int x, int y){
  x = find(x);
  y = find(y);
  if(x == y){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int node, edge;
  cin >> node >> edge;
  int result = 0;
  vector<pair<int, pair<int, int> > > v;
  for (int i = 0; i < edge; i++){
    int from, to, cost;
    cin >> from >> to >> cost;
    v.push_back(make_pair(cost, make_pair(from, to)));
  }
  sort(v.begin(), v.end());//cost순으로 정렬하기
  for (int i = 0; i <= node; i++){
    parent[i] = i;
  }//각 노드에 부모노드를 자기자신으로 초기화

  for (int i = 0; i < v.size(); i++){
    if(!sameparent(v[i].second.first, v[i].second.second)){
      uni(v[i].second.first, v[i].second.second);
      result += v[i].first;
    }
  }
  cout << result << '\n';
}