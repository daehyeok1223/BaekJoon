#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
  return a.first < b.first;
}

int main(){
  int N, age;
  string name;
  vector<pair<int, string> > V;

  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> age >> name;
    V.push_back(make_pair(age, name));
  }
  stable_sort(V.begin(), V.end(), compare);
  for (int i = 0; i < V.size(); i++){
    cout << V[i].first << " " << V[i].second << "\n";
  }
}

//sort는 불안정한 정렬도 값이 같을 경우 입력 순서가 보장되지 않지만
//stable_sort는 안정된 정렬도 같은 값에 대한 순서가 보장된다.