class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        // code here
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        for(auto &p:mp){
            if(p.second>((nums.size())/2)){
                return p.first;
            }
        }
        return -1;
    }
};