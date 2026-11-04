class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        
        int leftSum=0,rightSum=0;
        int n=arr.size(),maxi=INT_MIN;

        for(int i=0;i<k;i++) leftSum+=arr[i];
        maxi=max(maxi,leftSum);

        for(int i=0;i<k;i++){

            leftSum-=arr[k-1-i];
            rightSum+=arr[n-1-i];

            int sum=rightSum+leftSum;
            maxi=max(maxi,sum);

        }

        return maxi;

    }
};