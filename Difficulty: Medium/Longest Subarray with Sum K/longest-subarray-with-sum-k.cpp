class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        // code here
       int prefixsum=0;
       int length=0;
       unordered_map<int,int>mp;
       mp[0]=1;
       for(int i=0;i<nums.size();i++){
           prefixsum+=nums[i];
           if(prefixsum==k){
               length=i+1;
           }
           if(mp.count(prefixsum-k)){
               length=max(length,i-mp[prefixsum-k]);
           }
           if(!mp.count(prefixsum)){
               mp[prefixsum]=i;
           }
       }
       return length;
    }
}; 