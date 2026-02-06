class Solution {
  public:
  int ans=0;
  int t[1001][1001];
  int solve(int i,int j,string &s1,string &s2){
     if(i>=s1.size()||j>=s2.size())return 0;
     if(t[i][j]!=-1)return t[i][j];
      if(s1[i]==s2[j]){
          t[i][j]=1+solve(i+1,j+1,s1,s2);
          ans=max(ans,t[i][j]);
      }
      else{
          // yaha substring break hogi
          t[i][j]=0;
      }
      return t[i][j];
  }
    int longCommSubstr(string& s1, string& s2) {
        // your code here
        memset(t,-1,sizeof(t));
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s2.size();j++){
                solve(i,j,s1,s2);
            }
        }
        return ans;
    }
};