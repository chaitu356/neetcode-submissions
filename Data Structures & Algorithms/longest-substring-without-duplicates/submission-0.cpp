class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int count=0;
        int ml=0;
        int n=s.size();
        unordered_set<char>st;
        while(r<n){

            while(st.find(s[r])!=st.end()){
              
               st.erase(s[l]);
               l++;
            }
           st.insert(s[r]);
           ml=max(ml,r-l+1);
            r++;



        }
        return ml;
        
    }
};
