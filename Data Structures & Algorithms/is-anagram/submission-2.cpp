class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int n = s.size();
        std::unordered_map<char, int> counts;

        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }

        for (auto x : counts) {
            if (x.second != 0) return false;
        }

        return true;
    }
};
