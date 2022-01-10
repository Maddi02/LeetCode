class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::string w1 = "";
        std::string w2 = "";

        for (auto &in: word1) {
            w1 += in;
        }
        for (auto &in: word2) {
            w2 += in;
        }
        if (w1 == w2) {
            return true;
        }
        return false;
    }
};