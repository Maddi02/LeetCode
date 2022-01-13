class Solution {
public:
    string truncateSentence(string s, int k) {
       std::vector<std::string> a;
        std::string save = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) != ' ') {
                save += s.at(i);
            }
            if (s.at(i) == ' ' || i == (s.length() -1) ) {
                a.push_back(save);
                save = "";
            }
        }
        for(int i = 0 ; i < k ; i++)
        {
            if(i < k -1 )
            save += a.at(i) + " ";
            else{
                save += a.at(i);
            }
        }
        return save; 
    }
};