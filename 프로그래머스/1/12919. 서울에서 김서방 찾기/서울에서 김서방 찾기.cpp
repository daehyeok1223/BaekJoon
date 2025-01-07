#include<iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string loc = "";
    for(int i = 0; i < seoul.size(); i++){
        if(seoul[i] == "Kim"){
            loc = to_string(i);
            break;
        }
    }
    answer = "김서방은 " + loc + "에 있다";
    return answer;
}