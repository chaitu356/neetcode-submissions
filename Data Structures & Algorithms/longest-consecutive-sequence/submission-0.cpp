class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());
       int start;
       int count=0;
       int longest=0;
       for(int num:nums){
        if(st.find(num-1)==st.end()){
            start=num;
            count=1;

            while(st.find(start+1)!=st.end()){
                start=start+1;
                count++;
                
            }
            longest=max(longest,count);
        }

        
       }

       return longest;

    }
};
