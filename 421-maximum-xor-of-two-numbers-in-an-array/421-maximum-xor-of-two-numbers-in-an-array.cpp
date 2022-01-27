class Solution 
{
    static int _toggle(int x) { return x ? 0 : 1; }
    class TrieNode
    {
            TrieNode* ptr[2];
        public:
            TrieNode()
            {
                ptr[0] = nullptr;
                ptr[1] = nullptr;
            }
        
            TrieNode* insertAndGetNext(const unsigned int bit)
            {
                if(nullptr == ptr[bit]) ptr[bit] = new TrieNode;
                return getNext(bit);
            }
            
            TrieNode* getNext(const unsigned int bit)
            {
                return ptr[bit];
            }
        
            bool isPresent(const unsigned int bit)
            {
                return (nullptr != ptr[bit]);
            }
    };
    class Trie
    {
            TrieNode* root;
        public:
            Trie()
            {
                root = new TrieNode;
            }
        
            void add(const int num)
            {
                TrieNode* node = root;
                bitset<32> bs(num);
                for(int bit = 31;bit >= 0;--bit)
                {
                    node = node->insertAndGetNext(bs[bit]); 
                }
            }
        
            int getMax(const int num)
            {
                TrieNode* node = root;
                int complement = 0;
                bitset<32> bs(num);
                for(int bit = 31;bit >= 0;--bit)
                {
                    if(node->isPresent(_toggle(bs[bit])))
                    {
                        complement |= ((_toggle(bs[bit])) << bit);
                        node = node->getNext(_toggle(bs[bit]));
                    }
                    else
                    {
                        complement |= (bs[bit] << bit);
                        node = node->getNext(bs[bit]);
                    }
                }
                return (num ^ complement);
            }
    };
public:
    int findMaximumXOR(vector<int>& nums) 
    {
        Trie T;
        int maxXorVal = INT_MIN;
        
        for(auto num : nums) T.add(num);
        
        for(auto num : nums) maxXorVal = max(maxXorVal, T.getMax(num));
        
        return maxXorVal;
    }
};