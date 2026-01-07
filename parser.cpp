#include <iostream>
#include <stack>
#include <string>

bool isBalanced(std::string expression) {
    std::stack<char> s;

    for (char ch : expression) {
        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        // If closing bracket, check for match
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false; // Closing bracket with no opening
            
            char top = s.top();
            if ((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[')) {
                s.pop();
            } else {
                return false; // Mismatched bracket type
            }
        }
    }
    return s.empty(); // If stack is empty, all brackets were matched
}

int main() {
    std::string input = "(())";
    if (isBalanced(input)) {
        std::cout << "The string \"" << input << "\" is balanced." << std::endl;
    } else {
        std::cout << "The string \"" << input << "\" is NOT balanced." << std::endl;
    }
    return 0;
}
