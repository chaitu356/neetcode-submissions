class Solution {
public:
vector<vector<int>>ans;

    void solve(vector<int>& nums,vector<int>&curr,vector<int>&freq){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=1;
                curr.push_back(nums[i]);
                solve(nums,curr,freq);
                freq[i]=0;
                curr.pop_back();


            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int>curr;

        vector<int>freq(nums.size(),0);
        solve(nums,curr,freq);
        return ans;




        
        
    }
};
