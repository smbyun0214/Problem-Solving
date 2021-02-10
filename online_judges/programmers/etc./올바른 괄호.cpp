#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stk;
    
    for (char c : s) {
        if (c == '(') {
            stk.push(c);
        }
        else if (!stk.empty()) {
            stk.pop();
        }
        else {
            return false;
        }
    }
    
    return stk.empty();
}