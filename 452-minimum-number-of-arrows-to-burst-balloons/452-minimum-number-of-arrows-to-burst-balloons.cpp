class Solution {
public:
    static bool comparator(vector<int>& a, vector<int> & b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), comparator);
        int cnt = 0;
        int i = 0;
        while(i < points.size()){
            int end = points[i++][1];
            cnt++;
            while(i < points.size() && points[i][0] <= end &&                 points[i][1] >= end){
                i++;
            }
        }
        return cnt;
    }
};