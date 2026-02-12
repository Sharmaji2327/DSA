class Solution {
public:
    int longestBalanced(string s) {
        int ans=1;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                 freq[s[j]-'a']++;
                 int mini=INT_MAX,maxi=0;
                 for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        mini=min(mini,freq[k]);
                        maxi=max(maxi,freq[k]);
                    }
                 }
                 if(mini==maxi)
                 ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};