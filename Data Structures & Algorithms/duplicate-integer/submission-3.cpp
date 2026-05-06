class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> filtered;
        for (int n : nums) {
            if (filtered.count(n))
                return true;
            filtered.insert(n);
        }
        return false;
    }
};