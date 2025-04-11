#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int, int> left;
    unordered_map<int, int> right;
    
    // 전체를 먼저 오른쪽에 다 넣음
    for (int i = 0; i < topping.size(); i++) {
        right[topping[i]]++;
    }

    for(int i = 0; i < topping.size(); i++){
        int t = topping[i];

        // 오른쪽에서 하나 빼고
        right[t]--;
        if(right[t] == 0){
            right.erase(t);
        }

        // 왼쪽에 하나 추가
        left[t]++;
        
        // 종류 수 비교
        if(left.size() == right.size()){
            answer++;
        }
    }
    
    return answer;
}