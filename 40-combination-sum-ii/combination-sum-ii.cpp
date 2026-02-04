class Solution {
public:
vector<vector<int>>result;
void solve(int i,vector<int>&nums,int target,vector<int>&temp){
    if(target==0){
        result.push_back(temp);
        return;
    }
    for(int j=i;j<nums.size();j++){
        if( j>i && nums[j]==nums[j-1])continue;
    if(nums[j]>target)break;
    // take
    temp.push_back(nums[j]);
    solve(j+1,nums,target-nums[j],temp);
    temp.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(0,nums,target,temp);
        return result;
    }
};