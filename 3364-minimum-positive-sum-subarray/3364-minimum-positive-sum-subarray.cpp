class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        
        int n=arr.size(),mini=INT_MAX;
        for(int i=0;i<n;i++){
            
            int cnt=0;
            int sum=0;
            for(int j=i;j<n;j++){

                cnt++;
                sum+=arr[j];
                if(cnt>=l && cnt<=r){

                    if(sum>0) mini=min(mini,sum);

                } 
                if(cnt>r) break;

            }

        }

        if(mini==INT_MAX) return -1;
        return mini;

    }
};