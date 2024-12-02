#include<iostream>
#include <string>
#include <vector>

using namespace std;

int answer;
int high = 100000;
int low  = 1;
int mid;
long long cnt;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    while(high >= low){     
        mid = (high + low) / 2;
        cnt = 0;
        for(int i = 0; i < diffs.size(); i++){
            cnt += times[i];
            if(mid < diffs[i]){
                cnt += (times[i-1] + times[i]) * (diffs[i] - mid);
            }
            if(cnt > limit){
                break;
            }
        }
        if(cnt > limit){
            low = mid  + 1;
        }
        else{
            high = mid - 1;
        }
    }

    answer = low;
    return answer;

}
    