#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <functional>

using namespace std;



int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int> > pq;
    int answer = 0;
    for(int i = 0; i < scoville.size(); i++){
        pq.push(scoville[i]);
    }//우선순위 큐에 스코빌 지수 넣어줌.
    while(pq.size() > 1){
        int x = pq.top();
        if(x >= K){
            return answer;
        }
        pq.pop();
        int y = pq.top();
        if(y >= K){
            answer++;
            return answer;
        }
        pq.pop();
        //우선순위 큐에서 가장 작은 두개 뽑아줌 (x > y)
        long long val = x + y * 2;
        pq.push(val);
        answer++;
    }
    int k = pq.top();
    if(k < K){
        answer = -1;
        return answer;
    }
    else{
        return answer;
    }

    
}