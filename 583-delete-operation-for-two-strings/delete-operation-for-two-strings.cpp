class Solution {
public:
int dp[501][501];
int solve(int i,int j,string &s1,string &s2){
    if(i>=s1.size()&& j>=s2.size())return 0;
    if(i>=s1.size())return dp[i][j]=1+solve(i,j+1,s1,s2);
        if(j>=s2.size())return dp[i][j]= 1+solve(i+1,j,s1,s2);

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]){
        return solve(i+1,j+1,s1,s2);
    }
    return dp[i][j]=1+min(solve(i+1,j,s1,s2),solve(i,j+1,s1,s2));
}
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,word1,word2);
    }
};