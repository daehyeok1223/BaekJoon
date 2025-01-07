#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() == 1){
        answer.push_back(-1);
    }
    else{
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(), ans.end());
        int k = ans[0];
        
        for(int i = 0; i < ans.size(); i++){
            if(arr[i] != k){
                answer.push_back(arr[i]);
            }
        }
    
    }
    return answer;
}