class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        
        int n=arr.size(),maxi=INT_MIN,mini=INT_MAX;
        int sum1=0,sum2=0,totalSum=0,minSum=0,cnt=0;

        for(int i=0;i<n;i++){

            totalSum+=arr[i];

            sum1+=arr[i];
            sum2+=arr[i];

            if(sum1>maxi) maxi=sum1;
            if(sum2<mini) mini=sum2;

            if(sum1<0) sum1=0;
            if(sum2>0) sum2=0;

            if(arr[i]<0) cnt++;

        }

        if(cnt==n) return maxi;

        return max(maxi,totalSum-mini);

    }
};