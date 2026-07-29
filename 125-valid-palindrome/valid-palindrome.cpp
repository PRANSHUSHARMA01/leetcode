class Solution {
public:
    bool isPalindrome(string s) {
        string k;

        for (char ch : s) {
            if (isalnum(ch)) {
                k += tolower(ch);
            }
        }

        string n = k;
        reverse(n.begin(), n.end());

        return k == n;

    }
   
};