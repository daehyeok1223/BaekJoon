#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

int arr[400000];
double ans = 0;

int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  int n;
  cin >> n;
  if (n == 0)
	{
		cout << "0";
		return 0;
	}
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int k = round(n * 0.15);

  for (int i = 0; i < k; i++) {
    arr[i] = 0;
    arr[n - 1 - i] = 0;
  }
  for (int i = k; i < n - k; i++) {
    ans += arr[i];
  }
  int p = round(ans / (n - 2 * k));
  cout << p;
}

