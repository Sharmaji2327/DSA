class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    unordered_map<int,int>mp;
    //    for(auto i:nums){
    //     mp[i]++;
    //    } 
    //    for(auto &p: mp){
    //     if(p.second!=2)return p.first;
    //    }
    //    return -1;
    int i=0;
    for( auto p:nums){
        i^=p;
    }
    return i;
    }
};