#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int len = numbers.size();
    stack<int> index;
    vector<int> answer(len,-1); //정답배열을 -1로 초기화
    
    for(int i = 0; i < len; i++){
        while(!index.empty() && numbers[index.top()] < numbers[i]){
            answer[index.top()] = numbers[i];
            index.pop();
        }
        index.push(i);
    }
    return answer;
}