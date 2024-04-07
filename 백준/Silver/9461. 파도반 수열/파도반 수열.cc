#include <iostream>
using namespace std;

int main()
{
    long long int arr[101];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i < 101; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 3];
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout << arr[a];
        cout << '\n';
    }
}