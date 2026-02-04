class Solution {
public:
int t[301][5001];
int solve(int i,vector<int>&nums,int target){
if(target==0)return 1;
if(target<0 || i>=nums.size())return 0;
if(t[i][target]!=-1)return t[i][target];
    // jab take karenege toh bar bar wo le sake esliye 
    // take karte samay i nahi badhayenge
    int take=0;
    take=solve(i,nums,target-nums[i]);
    // skip
    int skip=solve (i+1,nums,target);
    return t[i][target]=take +skip;
}
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        return solve(0,coins,amount);
    }
};