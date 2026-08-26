class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        
        int i=0,j=0,maxi=0;
        int n=arr.size();

        while(j<n){

            if(arr[j]){

                j++;
                maxi=max(maxi,j-i);

            }
            else{

                j++;
                i=j;

            }

            

        }

        return maxi;
        
    }
};