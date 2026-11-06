class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        
        int left=0,right=0,n=arr.size();
        int zero=0,maxi=0;

        while(right<n){

            if(!arr[right]) zero++;

            while(zero>k){

                if(!arr[left]) zero--;
                left++;

            }

            maxi=max(maxi,right-left+1);
            right++;
           
        }

        return maxi;

    }
};