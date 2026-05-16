class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // a map contains the following:
        // sorted_chars -> ["str1", "str2", ...]
        // if different strings has the same set of chars, group those strings
        // original word -> sorted key -> bucket

        // <key,value> pair for string and its chars
        std::unordered_map<string, vector<string>> groups;

        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());

            // pots is the key, we are adding ["stop", "pots", "tops"]
            groups[key].push_back(str);
        }

        vector<vector<string>> result;

        //iterate through every key-value pair in the groups map
        // set key for the key, set value for the words
        for (const auto& [key, words] : groups) {
            result.push_back(words);
        }

        return result;
    }
};

