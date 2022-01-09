class Solution {
public:
    std::string sortSentence(std::string s) {

        std::string save = "";
        std::map<int, std::string> ordered_map;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                save += s[i];
            }
            if (s[i] == ' ' || i == s.length() - 1) {
                ordered_map.insert(std::make_pair(getNumber(save), save));
                if(getNumber(save) != 0)
                {
                    return s;
                }
                save = "";
            }

        }
        for ( auto it = ordered_map.begin(); it != ordered_map.end(); ++it ){
            if(it != ordered_map.end().operator--())
            save +=  it->second + " ";
            else{
                save +=  it->second;
            }
        }
        return save;
    }

private:
    const int getNumber(std::string &s1) {
        for (int i = 0; i < s1.length(); i++) {
            if (isdigit(s1[i])) {
                int a = s1[s1.length() - 1] - '0';
                s1.erase(s1.end() - 1);
                return a;
            }
            }
        return 0;
        }
    };