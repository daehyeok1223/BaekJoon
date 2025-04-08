#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

vector<char> v;

int main() {
	string s, boom;
	cin >> s;
	cin >> boom;
	int len = boom.size();
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i]);
		if (v.size() >= len) {
			int flag = 0;
			for (int j = 0; j < len; j++) {
				if (v[v.size() - len + j] != boom[j]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				for (int i = 0; i < len; i++) {
					v.pop_back();
				}
			}
		}
	}
	if (!v.empty()) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
	}
	else {
		cout << "FRULA";
	}
}