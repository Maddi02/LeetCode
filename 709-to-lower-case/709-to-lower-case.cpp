class Solution {
public:
    string toLowerCase(string s) {
      std::string lower = "";
        for(auto& in : s)
        {
            lower += tolower(in);
        }
        return lower;
    }
};