class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_elems;
        for (int &x : nums) {
            if (unique_elems.count(x) > 0) return 1;
            unique_elems.insert(x);
        }

        return false;
    }
};