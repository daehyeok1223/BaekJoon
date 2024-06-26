#include<iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++){
        dp[i] = arr[i];
    }
    
    for (int i = 1; i < N; i++){
        for (int j = 0; j < i; j++){
            if (arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }
    
    int max_sum = 0;
    for (int i = 0; i < N; i++){
        if(max_sum < dp[i]){
            max_sum = dp[i];
        }
    }
    
    cout << max_sum;
    return 0;
}
