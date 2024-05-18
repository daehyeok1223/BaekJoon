#include<iostream>
using namespace std;

bool visited[10001];

int main(){
  for (int i = 1; i < 10001; i++){
    if(i<10){
      int sum = i * 2;
      visited[sum] = true;
    } 
    else if (i >= 10 && i < 100){
      int sum = i + (i / 10) + i - ((i / 10) * 10);
      visited[sum] = 1;
    } 
    else if (i >= 100 && i < 1000) {
      int sum = i + i / 100 + i / 10 - ((i / 100) * 10) + i - ((i / 10) * 10);
      visited[sum] = 1;
    } 
    else if (i >= 1000 && i < 10000) {
      int sum = i + i / 1000 + i / 100 - ((i/1000) * 10) + i / 10 - ((i / 100) * 10) + i - ((i / 10) * 10);
      visited[sum] = 1;
    }
  }
  for (int i = 1; i < 10001; i++){
    if(visited[i] == 0){
      cout << i << '\n';
    }
  }
}
