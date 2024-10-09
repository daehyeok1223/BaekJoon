#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, K;
int visited[100001]; 

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = 0; 

  while(!q.empty()) {
    int a = q.front();
    q.pop();

    if(a == K) { 
        return;
    }
    if(a + 1 <= 100000 && visited[a + 1] == -1) {
        visited[a + 1] = visited[a] + 1;
        q.push(a + 1);
    }
    if(a - 1 >= 0 && visited[a - 1] == -1) {
        visited[a - 1] = visited[a] + 1;
        q.push(a - 1);
    }
    if(2 * a <= 100000 && visited[2 * a] == -1) {
        visited[2 * a] = visited[a] + 1;
        q.push(2 * a);
    }
  }
}

int main() {
  cin >> N >> K;

  fill(visited, visited + 100001, -1); 
  bfs(N);

  cout << visited[K] << '\n';
}
