#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> price) {
    vector<int> answer;
    for(int i = 0; i < price.size(); i++){
        int time = 0;
        for(int j = i + 1; j < price.size(); j++){
            if(price[i] <= price[j]){
                time++;
            }
            else{
                time++;
                break;
            }
        }
        answer.push_back(time);
    }
    return answer;
}