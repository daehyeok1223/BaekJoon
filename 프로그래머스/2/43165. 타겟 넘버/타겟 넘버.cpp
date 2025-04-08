#include <string>
#include <vector>
using namespace std;

vector<int> v;
vector<int> numbers_global; // 전역으로 numbers 저장
int target_global;          // 전역으로 target 저장
int answer = 0;

int Cal(){
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        ans += v[i];
    }
    return ans;
}

void DFS(int cnt){  // cnt는 들어간 숫자의 횟수
    if(cnt == numbers_global.size()){
        int k = Cal();
        if(k == target_global){
            answer++;
        }
        return; // 반드시 종료 필요!
    }

    v.push_back(numbers_global[cnt]);
    DFS(cnt + 1);
    v.pop_back();

    v.push_back(numbers_global[cnt] * -1);
    DFS(cnt + 1);
    v.pop_back();
}

int solution(vector<int> numbers, int target) {
    numbers_global = numbers;
    target_global = target;
    answer = 0;  // 여러 번 실행되는 경우 초기화 중요
    DFS(0);
    return answer;
}
