class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto i:nums){
        mp[i]++;
       } 
       for(auto &p: mp){
        if(p.second!=2)return p.first;
       }
       return -1;
    }
};