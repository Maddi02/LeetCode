class Solution {
public:
    int maxDepth(string s) {
       int j = 0;
        int counter = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
            {
                j++;
            }
            if(s[i] == ')')
            {
                j--;
            }
            counter = std::max(j, counter);
        }
        return counter; 
    }
};