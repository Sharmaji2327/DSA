class Solution {
public:
int s;
 int t[101][200001];
  int solve(int i,int sum,vector<int>&nums,int target,int k){
      if(i>=k){
          if(sum==target)return 1;
          else return 0;
      }
      if(t[i][sum+s]!=-1)return t[i][sum+s];
      // jab lenge to sum me add karenge
      int plus=solve(i+1,sum+nums[i],nums,target,k);
      int minus=solve(i+1,sum-nums[i],nums,target,k);
      return t[i][sum+s]= plus+minus;
      
  }
    int findTargetSumWays(vector<int>& nums, int target) {
         int k=nums.size();
         s=accumulate(nums.begin(),nums.end(),0);
        memset(t,-1,sizeof(t));
        return solve(0,0,nums,target,k);
    }
};