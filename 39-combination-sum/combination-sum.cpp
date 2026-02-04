class Solution {
public:
vector<vector<int>>result;
void solve(int i,vector<int>&nums,int target,vector<int>&temp){
    if(target==0){
        result.push_back(temp);
        return;
    }
    if(i>=nums.size()|| target<0)return;
   // not take
    solve(i+1,nums,target,temp);
    // take
    temp.push_back(nums[i]);
    solve(i,nums,target-nums[i],temp);
    temp.pop_back();

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>temp;
        solve(0,nums,target,temp);
        return result;
    }
};