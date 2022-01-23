class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
                vector<vector<int>> ret;
        vector<int> data(k);
        for (int i = 1; i <= k; ++i) {
            data[i - 1] = i;
        }
        ret.emplace_back(data);

        while (true) {
            int curr_wheel = -1;
            for (int wheel = k - 1; wheel >= 0; --wheel) {
                if (data[wheel] < (n - (k - wheel - 1))) {
                    curr_wheel = wheel;
                    break;
                }
            }
            if (curr_wheel == -1) break;
            ++data[curr_wheel];
            if (data[curr_wheel] < n - (k - curr_wheel - 1)) {
                int data_curr = data[curr_wheel];
                for (int i = curr_wheel + 1; i < k; ++i) {
                    ++data_curr;
                    data[i] = data_curr;
                }
            }
            ret.emplace_back(data);
        }

        return ret;
    }
};