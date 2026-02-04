class Solution {
public:
int t[13][100000];
int solve(int i,vector<int>&nums,int target){
if(target==0)return 0;
if(target<0 || i>=nums.size())return 1000000000;
if(t[i][target]!=-1)return t[i][target];
    // jab take karenege toh bar bar wo le sake esliye 
    // take karte samay i nahi badhayenge
    int take=0;
    take=1+solve(i,nums,target-nums[i]);
    // skip
    int skip=solve (i+1,nums,target);
    return t[i][target]=min(take ,skip);
}
    int coinChange(vector<int>& coins, int amount) {
         memset(t,-1,sizeof(t));
        return solve(0,coins,amount)==1000000000?-1:solve(0,coins,amount);
    }
};