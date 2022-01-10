class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        std::string result = "";

        while (i >= 0 ||j >= 0  || carry != 0)
        {
            if (i >= 0) {
                carry += a[i]=='0'? 0:1;
                i--;
            }
            if (j >= 0) {
                carry += b[j]=='0'?0:1;
                j--;
            }
            result = ((carry%2)==0?"0":"1") + result;
            carry /= 2;
        }
        return result; 
    }
};