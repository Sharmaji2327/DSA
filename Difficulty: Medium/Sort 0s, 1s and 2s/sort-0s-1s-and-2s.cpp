class Solution {
  public:
    void sort012(vector<int>& nums) {
        // code here
        unordered_map<int,int>mp;
        for(auto x:nums ){
            mp[x]++;
        }
        int i=0;
        // fil zero
        while(mp[0]--){
            nums[i++]=0;
        }
        // fill one
        while(mp[1]--){
            nums[i++]=1;
        }
        while(mp[2]--){
            nums[i++]=2;
        }
    }
};