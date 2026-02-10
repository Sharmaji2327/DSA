class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(mp.find(need)!=mp.end())return true;
mp[nums[i]]=need;
        }
        return false;
    }
};