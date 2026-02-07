class Solution {
  public:
  int dp[1001][1001];
  bool ispalindrome(int left,int right,string & s)
   {
       if(left>=right)return true;
       if(dp[left][right]!=-1)return dp[left][right];
       if(s[left]!=s[right])return dp[left][right]=false;
       return dp[left][right]=ispalindrome(left+1,right-1,s);
       
   }
    string getLongestPal(string &s) {
        // code here
        string ans="";
        memset(dp,-1,sizeof(dp));
       for(int i=0;i<s.size();i++){
           for(int j=i;j<s.size();j++){
               if(ispalindrome(i,j,s)){
                   if(j-i+1>ans.size()){
                       ans=s.substr(i,j-i+1);
                   }
               }
           }
       }
       return ans;
    }
};