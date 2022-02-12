class Solution {
public:
    unordered_map<string,set<int>> m;
    queue<pair<int,int>> q;
    vector<bool> visited;

    void visitNext(string& w, int level) {
        for (int i = 0; i < w.length(); i++) {
            string key = w; key[i] = '*';
            auto& next = m[key];
            for (int j : next) {
                if (!visited[j]) {
                    q.push({j, level});
                    visited[j] = true;
                }
            }
        }
    }

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        bool hasEnd = false;
        visited.resize(wordList.size());
        for (int j = 0; j < wordList.size(); j++) {
            auto& w = wordList[j];
            for (int i = 0; i < w.length(); i++) {
                string key = w; key[i] = '*';
                m[key].insert(j);
            }
            hasEnd |= w == endWord;
        }
        
        if (!hasEnd) {
            return 0;
        }
        
        visitNext(beginWord, 1);
        
        while (!q.empty()) {
            auto [wi, level] = q.front(); q.pop();
            auto& w = wordList[wi];
            if (w == endWord) {
                return level+1;
            }
            
            visitNext(w, level+1);
        }
        return 0;
    }
};