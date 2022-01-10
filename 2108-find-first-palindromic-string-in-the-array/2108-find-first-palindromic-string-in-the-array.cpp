class Solution {
public:
    std::string firstPalindrome(std::vector<std::string> &words) {

        int a = 0;
        char b = ' ';
        char c = ' ';
        for (int i = 0;  i < words.size(); i++) {
            a = words.at(i).size() - 1;
            for (int j = 0; j < words.at(i).size(); j++) {
                           if(words.at(i).size() == 1)
                    return words.at(i);
                b = words.at(i).at(j);
                c = words.at(i).at(a);
                if (b == c) {
                    a--;
                }
                if (a == 0) {
                    return words.at(i);
                }
                if (b != c) {
                    break;
                }

            }
        }
           return "";
    }
};