#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.size() != 4 && s.size() != 6)
        return false;

    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i]))  // 숫자가 아니면 false
            return false;
    }

    return true;
}
