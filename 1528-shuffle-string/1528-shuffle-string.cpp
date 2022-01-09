class Solution {
public:
        std::string restoreString( const std::string& s, const std::vector<int>& indices) const  {

            std::string result ="";
            std::map<int, char> mapped_indices;
            for(int i = 0 ; i < s.length() ; i++)
            {
                mapped_indices.insert(std::pair<int,char>(indices[i],s[i]));
            }
            for(auto& in : mapped_indices)
            {
                result += in.second;
            }
            return result;
        }
 
};