#include <string>
#include <vector>

using namespace std;

int visited[10];
int solution(vector<int> numbers) {
    
    int answer = 0;
    for(int i = 0; i < numbers.size(); i++){
        visited[numbers[i]]++;
    }
    for(int i = 0; i < 10; i++){
        if(visited[i] == 0){
            answer += i;
        }
    }
    return answer;
}