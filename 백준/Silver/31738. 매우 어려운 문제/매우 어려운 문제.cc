
#include<iostream>
using namespace std;

int main() {
    long long N;
    int M;
    long long ans = 1;
    cin >> N >> M;

    if (N >= M) {
        cout << 0 << '\n';
        return 0;
    }
    
    for (int i = 1; i <= N; i++) {
        ans = (ans * i) % M; 
    }
    cout << ans << '\n';
}