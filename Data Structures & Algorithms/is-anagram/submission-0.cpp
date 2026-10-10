class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        
        for(char c:s){
            mp1[c]++;
        }

        for(char c:t){
            mp1[c]--;

        }

        for(auto it:mp1){
            int count=it.second;
            if(count!=0)
            return false;
        }

        return true;


        
    }
};
