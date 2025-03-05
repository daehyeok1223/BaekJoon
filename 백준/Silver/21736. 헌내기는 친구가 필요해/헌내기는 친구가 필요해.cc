#include<iostream>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
char arr[601][601];
bool visited[601][601];
int N,M;
int answer;

void BFS(int x, int y){
    for(int i = 0; i < 4; i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(xx >= 0 && yy >=0 && xx < N && yy < M && arr[xx][yy] != 'X' && !visited[xx][yy]){
            visited[xx][yy] = true;
            if(arr[xx][yy] == 'P'){
                answer++;
            }
            BFS(xx,yy);
        }
    }
}

int main(){
    cin>>N>>M;
    int s_x, s_y;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'I'){
                s_x = i;
                s_y = j;
            }
        }
    }
    BFS(s_x, s_y);
    if(answer == 0){
        cout<<"TT";
    }
    else{
        cout<<answer;
    }
}