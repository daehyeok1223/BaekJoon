#include<iostream>
#include<functional>
#include<queue>
using namespace std;

priority_queue<int, vector<int>, greater<int> > pq; //최소힙으로 작용, 즉 제일 작은 값이 top에 존재한다.

int main(){
    cin.tie(NULL);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 0){
            if(!pq.empty()){
                int k = pq.top();
                cout << k << '\n';
                pq.pop();
            }
            else{
                cout << "0" << '\n';
            }
        }
        else{
            pq.push(a);
        }
    }

}