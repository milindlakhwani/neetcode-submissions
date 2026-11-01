class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numsMap = {};

        for (const int &num: nums){
            if(numsMap[num] > 0) {
                return true;
            }
            numsMap[num]++;
        }

        return false;
    }
};
