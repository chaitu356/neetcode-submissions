class Solution {
public:
    int totalhours(int k,vector<int>&piles){
        int th=0;
        for(int pile:piles){
            th+=ceil((pile+k-1)/k);
        }
        return th;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(low+high)/2;

            if(totalhours(mid,piles)<=h){
                high=mid-1;
                ans=mid;
            }

            else{
                low=mid+1;
            }


        }

        return ans;


        
    }
};
