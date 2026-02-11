class Solution {
public:
    int minimumDeletions(string s) {
     stack<char>st;
     int count=0;
     int n=s.size();
    int j=0;
    while(j<n){
        if(!st.empty() && st.top()=='b' && s[j]=='a'){
            st.pop();
            count++;
        }
        else {
            st.push(s[j]);
        }
        j++;
        
    }
return count;
    }
};