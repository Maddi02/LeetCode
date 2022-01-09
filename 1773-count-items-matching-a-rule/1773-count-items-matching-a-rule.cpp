class Solution {
public:
    int countMatches(std::vector<std::vector<std::string>>& items, const std::string& ruleKey, const std::string& ruleValue) {

    int counter = 0;
        int rule = 0;

        if(ruleKey == "type")
        {
            rule = 0;
        }
        if(ruleKey =="color")
        {
            rule = 1;
        }
        if(ruleKey =="name")
        {
            rule = 2;
        }

        for(int j=0;j<items.size();j++){
            if(items[j][rule]==ruleValue)
                counter++;
        }

        return counter;
    }
};