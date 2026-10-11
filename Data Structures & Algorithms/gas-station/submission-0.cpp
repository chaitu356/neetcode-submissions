class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;
        for(int num:gas){
            totalgas+=num;
        }
         for(int num:cost){
            totalcost+=num;
        }
        int start=0;
        if(totalcost>totalgas)return -1;
        int tank=0;
        for(int i=0;i<gas.size();i++){
          tank+=gas[i]-cost[i];
          if(tank<0){
            tank=0;
            start=i+1;
          }
        }

        return start;
        
    }
};
