class Solution {
public:
    int heightChecker(vector<int>& heights) {
       std::vector<int> a(heights.begin(), heights.end());
        std::sort(a.begin(), a.end());
        int counter = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (a.at(i) != heights.at(i)) {
                counter++;
            }
        }
        return counter; 
    }
};