class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int n=s.size();
        int hash[26]={};
        int maxf=0;
        int ans=0;
        while(r<n){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            while((r-l+1)-maxf>k){
                hash[s[l]-'A']--;
               l++;
               maxf=0;
               for(int i=0;i<25;i++){
                maxf=max(maxf,hash[i]);
               }


            }

            if((r-l+1)-maxf<=k){
                ans=max(ans,r-l+1);
            }
            r++;


        }

        return ans;
        
    }
};
