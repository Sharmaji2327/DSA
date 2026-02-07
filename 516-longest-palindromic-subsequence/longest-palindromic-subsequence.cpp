class Solution {
public:
int t[1001][1001];
int solve(int i,int j,string &s1,string &s2){
    if(i>=s1.size()||j>=s2.size())return 0;
    if(t[i][j]!=-1)return t[i][j];
    if(s1[i]==s2[j]){
        return t[i][j]=1+solve(i+1,j+1,s1,s2);
    }
    return t[i][j]=max(solve(i+1,j,s1,s2),solve(i,j+1,s1,s2));
}
    int longestPalindromeSubseq(string s) {
        string s2=s;
        memset(t,-1,sizeof(t));
        reverse(s2.begin(),s2.end());
        return solve(0,0,s,s2);
    }
};