#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    if(x < 10){
        answer = true;
    }
    else if(10 <= x && x < 100){
        int k = (x/10) + (x % 10);
        if(x % k == 0){
            answer = true;
        }
        else{
            answer = false;
        }
    }
    else if(100 <= x && x < 1000){
        int k = (x / 100) + ((x % 100)/10) + (x % 10);
        if(x % k == 0){
            answer = true;
        }
        else{
            answer = false;
        }
    }
    else if(1000 <= x && x < 10000){
        int k = (x/1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10);
        if(x % k == 0){
            answer = true;
        }
        else{
            answer = false;
        }
    }
    return answer;
}