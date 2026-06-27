class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        if(s.size() != t.size()) return false;
        int n = s.size();
        for(int i = 0; i<n;i++) {
            m[s[i]]++;
        }
        for(int i = 0; i<n;i++) {
            if(m[t[i]] > 0) m[t[i]]--;
            else return false;
        }
        for(auto i : m) {
            if(i.second != 0) return false;
        }
        return true;
    }
};
