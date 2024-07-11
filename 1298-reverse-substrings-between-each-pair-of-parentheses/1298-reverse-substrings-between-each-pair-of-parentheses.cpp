#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::string reverseParentheses(std::string s) {
        std::stack<std::string> stack;
        std::string currentString;

        for (char c : s) {
            if (c == '(') {
                stack.push(currentString);
                currentString = "";
            } else if (c == ')') {
                std::reverse(currentString.begin(), currentString.end());
                if (!stack.empty()) {
                    currentString = stack.top() + currentString;
                    stack.pop();
                }
            } else {
                currentString += c;
            }
        }
        
        return currentString;
    }
};
