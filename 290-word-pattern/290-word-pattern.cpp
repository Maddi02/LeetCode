class Solution {
public:
    bool wordPattern(string pattern, string s) {
                std::map<char, std::string> a;
        std::vector<std::string> b;
        std::string word;
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) != ' ') {
                word += s.at(i);
            }
            if (s.at(i) == ' ' || i == s.length() - 1) {
                b.push_back(word);
                word = "";
            }
        }
        if (b.size() != pattern.size()) return false;

        std::map<char, std::string> ma;
        std::map<std::string, char> mb;

        for (size_t i = 0; i < b.size(); i++) {
            ma[pattern[i]] = b[i];
            mb[b[i]] = pattern[i];
        }

        for (size_t i = 0; i < b.size(); i++) {
            if (ma[pattern[i]] != b[i] || mb[b[i]] != pattern[i]) {
                return false;
            }
        }

        return true;
    }
};