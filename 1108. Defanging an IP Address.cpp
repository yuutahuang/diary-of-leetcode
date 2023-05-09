///1108. Defanging an IP Address
/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".
*/
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                ans += "[.]";
            } else {
                ans += address[i];
        }
    }
    return ans;
    }
};
