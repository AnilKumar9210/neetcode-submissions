class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> track;

        for (int i = 0; i < nums.size (); i++) {
            int rem = target - nums[i];
            if (track.find (rem)  != track.end ()) {
                return {track[rem],i};
            }
            track[nums[i]] = i;
        }
        return {-1,-1};
    }
};
