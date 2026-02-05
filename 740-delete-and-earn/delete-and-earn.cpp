class Solution {
public:
int t[20001];
int solve(int i,vector<int>&nums){
    if(i>=nums.size())return 0;
    if(t[i]!=-1)return t[i];
    int take=nums[i]+solve(i+2,nums);
    int skip=solve(i+1,nums);
    return t[i]=max(take,skip);
}
    int deleteAndEarn(vector<int>& arr) {
        
        int maxi=*max_element(arr.begin(),arr.end());
        vector<int>mp(maxi+1,0);
        for(auto x:arr){
            mp[x]+=x;
        }
        memset(t,-1,sizeof(t));
        return solve(0,mp);
    }
};