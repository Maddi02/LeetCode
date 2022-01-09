class Solution {
public:
    string defangIPaddr(string address) {
        std::vector<std::string> saveNumbers;
        saveNumbers.reserve(4);
        std::string save = "";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] != '.') {
                save += address[i];
            }
            if (address[i] == '.' || i == address.length() - 1) {
                saveNumbers.push_back(save);
                save = "";
            }
        }
        address = "";
        for (int i = 0; i < saveNumbers.size() - 1; i++) {
            address += saveNumbers.at(i) + "[.]";
        }
        address += saveNumbers.at(saveNumbers.size() - 1);
        return address;
    }
};