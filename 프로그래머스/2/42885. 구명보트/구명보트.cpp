#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int ans = 0;
    sort(people.begin(), people.end());
    int start = 0;
    int end = people.size() - 1;
    while(start <= end){
        if(people[start] + people[end] <= limit){
            end--;
            start++;
        }
        else{
            end--;
        }
        ans++;
    }
    return ans;
}