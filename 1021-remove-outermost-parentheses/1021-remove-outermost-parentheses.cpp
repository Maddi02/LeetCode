class Solution {
public:
    string removeOuterParentheses(string s) {
        std::string result;
        int brackedState = 0;
        for (char c : s) {
            if (c == '(' && brackedState++ > 0)
            {
                result += c;
            }
            if (c == ')' && brackedState-- > 1){
                result += c;
            }
        }
        return result;
    }
};