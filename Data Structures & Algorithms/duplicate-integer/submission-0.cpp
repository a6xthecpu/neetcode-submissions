class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> filtered;
        for (int n : nums)
            filtered.insert(n);
        if (filtered.size() == nums.size())
            return false;
        return true;
    }
};