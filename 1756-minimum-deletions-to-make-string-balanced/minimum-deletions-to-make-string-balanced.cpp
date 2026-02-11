class Solution {
public:
    int minimumDeletions(string s) {
     stack<char>st;
     int count=0;
    int j=s.size()-1;
    while(j>=0){
        if(!st.empty() && st.top()=='a' && s[j]=='b'){
            st.pop();
            count++;
        }
        else {
            st.push(s[j]);
        }
        j--;
        
    }
return count;
    }
};