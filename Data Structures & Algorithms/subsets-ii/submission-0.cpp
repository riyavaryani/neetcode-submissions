class Solution {
public:
    void bactracking(vector<int>& nums, set<vector<int>> &s, vector<int> &curr, int i) {
        curr.push_back(nums[i]);
        s.insert(curr);
        for(int j = i+1;j<nums.size();j++) {
            bactracking(nums, s, curr, j);
        }
        curr.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> curr;
        ans.push_back(curr);
        sort(nums.begin(), nums.end());
        for(int i =0;i<nums.size();i++) {
            bactracking(nums, s, curr, i);
        }
        for(auto i : s) {
            ans.push_back(i);
        }
        return ans;
    }
};
