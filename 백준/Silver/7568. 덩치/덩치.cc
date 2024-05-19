#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n, x, y;
  int count;

  cin >> n;
  vector<pair<int, int> > v;
  for (int i = 0; i < n; i++){
    cin >> x >> y;
    v.push_back(pair<int, int>(x, y)); //입력받은 x와 y를 쌍으로 벡터에 넣는다.
  }

  for (int j = 0; j < n; j++){
    count = 1;  //모든 사람의 등수를 1로 초기화했다.
    for (int k = 0; k < n; k++){
      if(v[j].first < v[k].first && v[j].second < v[k].second){
        count++;
      }
    }
    cout << count << '\n';
  }
}