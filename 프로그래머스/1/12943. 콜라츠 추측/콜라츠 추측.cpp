#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    int answer = 0;
    if(n == 1){
        return answer;
    }
    
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n = n * 3 + 1;
        }
        answer++;
        if(answer >= 500){
            answer = -1;
            break;
        }
    }
    
    
    
    return answer;
    
}