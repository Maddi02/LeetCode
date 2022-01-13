class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        const char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
                               "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
                               "-.--", "--.."};
        const std::string alpa{"abcdefghijklmnopqrstuvwxyz"};
        std::map<char, std::string> a;
        std::unordered_set<std::string>  moseValues;
        for (int i = 0; i < alpa.length(); i++) {
            a.insert(std::make_pair(alpa[i], morse[i]));
        }
        std::string currentMorse = "";
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.at(i).length(); j++) {
                currentMorse += a.at(words.at(i).at(j));

            }
            moseValues.insert(currentMorse);
            currentMorse = "";
        }
        return moseValues.size();
    }
};