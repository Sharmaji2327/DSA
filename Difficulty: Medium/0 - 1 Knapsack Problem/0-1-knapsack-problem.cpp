class Solution {
  public:
  vector<vector<int>>t;
  int solve(int i,int capacity,vector<int> &val, vector<int> &wt){
      if(i>=wt.size()|| capacity==0)return 0;
      if(t[i][capacity]!=-1)return t[i][capacity];
      int take=0;
      if(wt[i]<=capacity){
       take=val[i]+solve(i+1,capacity-wt[i],val,wt);
      }
      int skip=solve(i+1,capacity,val,wt);
      return t[i][capacity]=max(take,skip);
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=wt.size();
        t.assign(n+1,vector<int>(1001,-1));
        return solve(0,W,val,wt);
        
    }
};