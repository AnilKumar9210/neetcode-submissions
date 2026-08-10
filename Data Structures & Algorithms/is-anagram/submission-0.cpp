class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length () != t.length ()) return false;

        unordered_map<char,int> track;

        for (auto i : s) track[i]++;

        for (auto i : t) {
            if (track.find (i) == track.end () || track[i] == 0) {
                return false;
            }
            track[i]--;
        }
        return true;
    }
};
