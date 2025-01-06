#include <string>
#include <vector>
 
using namespace std;
 
string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ') 
        {
            answer += ' ';
            continue;            
        }//빈 공간일 때 탐색
        char temp = s[i] + n;
        
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // n이 엄청 커졌을 경우 대비
            while (!(temp >= 'a' && temp <= 'z'))
            {
                temp -= 26;
            }
        }
        // 대문자일 경우
        else
        {
            while (!(temp >= 'A' && temp <= 'Z'))
            {
                temp -= 26;
            }
        }
        answer += temp;
    }
    return answer;
}
