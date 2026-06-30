class Solution {
public:
    void bactracking(vector<int>& nums, set<vector<int>> &s, vector<int> &curr, int i) {
        // curr.push_back(nums[i]);
        // curr.push_back(curr);
        s.insert(curr);
        if(i == nums.size()) return;
        for(int j = i;j<nums.size();j++) {
            curr.push_back(nums[j]);
            bactracking(nums, s, curr, j+1);
            curr.pop_back();
        }
        // curr.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> curr;
        sort(nums.begin(), nums.end());
            bactracking(nums, s, curr, 0);
        for(auto i : s) {
            ans.push_back(i);
        }
        return ans;
    }
};
