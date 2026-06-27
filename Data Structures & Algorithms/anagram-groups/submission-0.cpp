class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        int a = strs.size();
        for(int i =0;i<a;i++) {
            vector<int> v(26, 0);
            for(int j =0;j<strs[i].size();j++) {
                v[strs[i][j] - 'a'] += 1;
            }
            string s = "";
            for(int r = 0; r<26;r++) {
                s = s + (char)v[r];
            }
            m[s].push_back(strs[i]);
        }
        for(auto i : m) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
