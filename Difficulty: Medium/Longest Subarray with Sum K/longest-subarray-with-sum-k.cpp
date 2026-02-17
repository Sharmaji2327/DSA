class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        // code here
        int sum=0,ans=0;
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          if(sum==k){
              ans=i+1;
          }
          if(mp.count(sum-k)){
              ans=max(ans,i-mp[sum-k]);
          }
          if(!mp.count(sum)){
              mp[sum]=i;
          }
      }
      return ans;
    }
}; 