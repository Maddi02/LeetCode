class Solution {
public:
std::string interpret(const std::string &command) {
        std::string result = "";
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                result += 'G';
            }
            if (i + 2 <= command.size() && command[i] == '(' && command[i + 1] == ')') {
                result += 'o';
            }
            if (i + 4 <= command.size()  && command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' &&
                command[i + 3] == ')') {
                result += 'a';
                result += 'l';
            }
        }
        return result;
    }
};