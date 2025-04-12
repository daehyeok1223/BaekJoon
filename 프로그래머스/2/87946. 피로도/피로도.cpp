#include <string>
#include <vector>

using namespace std;

bool visited[10];
int answer = 0;

void dfs(int hp, int round, vector<vector<int>> &dungeons){
    answer = max(answer,round);//라운드마다 최댓값 update
    
    for(int i = 0; i < dungeons.size(); i++){
        if(dungeons[i][0] <= hp && !visited[i]){
            visited[i] = true;
            dfs(hp - dungeons[i][1], round + 1, dungeons);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    dfs(k, 0, dungeons);
    return answer;
}