class Solution {
public:
    int balancedStringSplit(string s) {
        int result = 0;
        int counter = 0 ;
        for(int i = 0 ; i < s.length() ;i++)
        {
            if(s[i] == 'R')
            {
                counter++; 
            } else{
                counter--; 
            }
            if(counter == 0)
            {
                result++;
            }
        }
        return result;
    }
};