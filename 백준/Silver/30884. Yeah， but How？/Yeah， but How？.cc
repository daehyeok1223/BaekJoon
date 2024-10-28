#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
       string s;
    int len, i;

    cin >> s; len = s.length();
    for (i = 0; i < len - 1; i++)
    {
        cout << s[i];

        if (s[i] == '(' && s[i + 1] == ')') cout << '1';
        if (s[i] == ')' && s[i + 1] == '(') cout << '+';
    }
    cout << s[len - 1];
}