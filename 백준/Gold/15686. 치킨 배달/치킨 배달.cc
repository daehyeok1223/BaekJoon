#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int N, M;
vector<pair<int, int> > house;
vector<pair<int, int> > chicken;
bool check[20];
int mini = 9999999;

void calculate(){
  int sum = 0;
  for (int i = 0; i < house.size(); i++){
    int minimum = 99999999;
    for (int j = 0; j < chicken.size(); j++){
        if(!check[j]){
          continue;
        }
        else {
          int y = abs(house[i].first - chicken[j].first);
          int x = abs(house[i].second - chicken[j].second);
          minimum = min(minimum, x + y);
        }
    }
    sum += minimum;
  }
  mini = min(mini, sum);
}

void select(int start, int cnt){
  if(cnt == M){
    calculate();
    return;
  }
  else{
    for (int i = start; i < chicken.size(); i++){
      if(!check[i]){
        check[i] = true;
        select(i + 1, cnt + 1);
        check[i] = false;
      }
    }
  }
}

int main(){
  cin >> N >> M;
  int k;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      cin >> k;
      if(k == 1){
        house.push_back(make_pair(i, j));
      }
      else if(k == 2){
        chicken.push_back(make_pair(i, j));
      }
    }
  }
  select(0, 0);
  cout << mini << '\n';
  return 0;
}