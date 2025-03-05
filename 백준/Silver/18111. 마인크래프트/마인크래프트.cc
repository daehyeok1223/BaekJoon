#include<iostream>
#include<limits.h>
using namespace std;
int ground[501][501];
int N,M,B;
int max_time = INT_MAX;
int height;

int FindMin(){
    int min = 500;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(ground[i][j] < min){
                min = ground[i][j];
            }
        }
    }
    return min;
}

int FindMax(){
    int max = -500;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(ground[i][j] > max){
                max = ground[i][j];
            }
        }
    }
    return max;
}

void Cal(int max, int min){
    for(int i = max; i >= min; i--){
        int m_time = 0; // i층일 때 평탄화 하는데 걸리는 시간
        int cnt = 0; //사용한 블럭의 개수
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                if(ground[j][k] < i){//블럭을 쌓아야할 경우
                    m_time += (i - ground[j][k]);
                    cnt += (i - ground[j][k]);

                }
                else if(ground[j][k] > i){//블럭을 깎아내야할 경우
                    m_time += 2 * (ground[j][k] - i);
                    cnt -= (ground[j][k] - i);

                }
            }
        }
        if(B - cnt >= 0 && m_time < max_time){
            max_time = m_time;
            height = i;
        }
    }
}


int main(){
    cin >> N >> M >> B;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin>>ground[i][j];
        }
    }//ground에 좌표당 높이 입력받기
    int max_h = FindMax();
    int min_h = FindMin();

    Cal(max_h, min_h);
    cout<< max_time <<" "<<height;
}