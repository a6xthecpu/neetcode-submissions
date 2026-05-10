class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort string
        // add og string to key of sorted string
        unordered_map<string, vector<string>> res;
        for (auto s : strs) {
            string sorted = s;
            std::sort(sorted.begin(), sorted.end());
            res[sorted].push_back(s);
        }

        vector<vector<string>> result;
        for (auto pearto : res) result.push_back(pearto.second);
        return result;
    }
};
