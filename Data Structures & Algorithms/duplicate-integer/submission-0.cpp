class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> track;

        for (auto i : nums) {
            track[i]++;
            if (track[i] > 1) 
                return true;
            
        }
        return false;
    }
};