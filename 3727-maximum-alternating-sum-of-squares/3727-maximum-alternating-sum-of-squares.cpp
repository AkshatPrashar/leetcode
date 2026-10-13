class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        
        int n=arr.size();
        for(int i=0;i<n;i++){

            if(arr[i]<0) arr[i]=-1*arr[i];

        }
        sort(arr.begin(),arr.end());
        
        int neg=(n/2)-1;
        long long sum=0;

        for(int i=0;i<=neg;i++) sum-=((long long)arr[i]*arr[i]);
        for(int i=neg+1;i<n;i++) sum+=((long long)arr[i]*arr[i]);

        return sum;

    }
};