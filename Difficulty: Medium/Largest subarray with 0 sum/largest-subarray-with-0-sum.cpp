class Solution {
  public:
    int maxLength(vector<int>& nums) {
        // code here
        int prefixsum=0;
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int length=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.count(prefixsum)){
                length=max(length,i-mp[prefixsum]);
            }
            if(!mp.count(prefixsum)){
                mp[prefixsum]=i;
            }
        }
        return length;
    }
};