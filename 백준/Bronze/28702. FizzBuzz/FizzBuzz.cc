#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	string a, b, c;
	cin >> a >> b >> c;
	if(a[a.size() - 1] != 'z'){
		int next = stoi(a) + 3;
		if(next % 3== 0 && next % 5 == 0){
			cout << "FizzBuzz";
		}
		else if(next % 3 == 0) cout << "Fizz";
		else if(next % 5 == 0) cout << "Buzz";
		else cout << next;
	}
	else if(b[b.size() - 1] != 'z'){
		int next = stoi(b) + 2;
		if(next % 3== 0 && next % 5 == 0){
			cout << "FizzBuzz";
		}
		else if(next % 3 == 0) cout << "Fizz";
		else if(next % 5 == 0) cout << "Buzz";
		else cout << next;
	}
	else{
		int next = stoi(c) + 1;
		if(next % 3== 0 && next % 5 == 0){
			cout << "FizzBuzz";
		}
		else if(next % 3 == 0) cout << "Fizz";
		else if(next % 5 == 0) cout << "Buzz";
		else cout << next;
	}
	return 0;
}
