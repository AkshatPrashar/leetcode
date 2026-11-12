class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        
        int n=arr.size(),maxi=1;
        int i=0,j=0;

        while(i<n-1){
            
            j=i;
            while(j<n-1 && arr[j]<arr[j+1]){

                j++;

            }
            maxi=max(maxi,j-i+1);
            i=j+1;

        }
        i=0,j=0;
        while(i<n-1){
            
            j=i;
            while(j<n-1 && arr[j]>arr[j+1]){

                j++;

            }
            maxi=max(maxi,j-i+1);
            i=j+1;

        }

        return maxi;

    }
};