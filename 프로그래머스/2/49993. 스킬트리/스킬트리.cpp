#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i = 0; i < skill_trees.size(); i++){
        int position = 0;
        int flag = 0;
        for(int j = 0; j < skill_trees[i].size(); j++){
            for(int k = 0; k < skill.size(); k++){
                if(skill[k] == skill_trees[i][j]){
                    if(position < k){
                        flag = 1;
                        break;
                    }
                    else{
                        position++;
                        continue;
                    }
                }
            }
            
        }
        if(flag == 0){
            answer++;
        }
        
        
    }  
        
    
    return answer;
}