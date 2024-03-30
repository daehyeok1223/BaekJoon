#include<iostream>
using namespace std;

int main() {
	
	int a,b,c;

	cin >> a >> b >> c;
	printf("%d %d", (a + (b + c) / 60) % 24, (b + c) % 60);
	
	return 0;
}