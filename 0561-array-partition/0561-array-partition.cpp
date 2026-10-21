class Solution {
public:
    int arrayPairSum(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int sum=0,n=arr.size();

        for(int i=0;i<n;i++){

            if(i%2==0) sum+=arr[i];

        }

        return sum;

    }
};