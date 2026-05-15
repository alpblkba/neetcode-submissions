class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // sort chars as lowercase
        // frequencies of the same chars will be adjacent

        if (s.size() != t.size()) {
            return false;
        }

        for (char& c : s) { 
            c = tolower(c);
        }

        for (char& c : t) {
            c = tolower(c);
        }

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        return s == t;


    }
};
