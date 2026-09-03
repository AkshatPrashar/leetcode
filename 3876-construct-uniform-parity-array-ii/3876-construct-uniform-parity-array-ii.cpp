class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        
        int cntOdd=0,cntEven=0;
        int n=arr.size();
        int mini=INT_MAX;

        for(int x:arr){

            if(x%2==0) cntEven++;
            else cntOdd++;
            mini=min(mini,x);

        }

        if((n>1) && (cntOdd!=0) && (mini%2==0)) return false;

        return true; 

    }
};