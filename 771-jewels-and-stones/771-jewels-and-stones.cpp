class Solution {
public:
   int numJewelsInStones(const std::string& jewels, const std::string& stones) {
            std::vector<char> charInString;
            int counter = 0;
            for(int i = 0 ;i < jewels.length(); i++) {
                auto contais = std::find(jewels.begin(),jewels.end(), jewels[i]);
                if(!(contais ==jewels.end())) {
                    charInString.push_back(jewels[i]);
                }
            }
            for(int i = 0 ;i < charInString.size();i++) {
                for(int j = 0 ; j < stones.length(); j++)
                if(charInString.at(i) == stones[j]) {
                    counter++;
                }
            }
            return counter;
        }
    };
