class Solution {
public:

    bool isPossible(vector<int>& arr,int mid,int k){

        int cnt=1,sum=0;

        for(int x:arr){

            if(mid<x) return false;
            if(sum+x>mid){

                cnt++;
                sum=x;

            }else sum+=x;

        }
        return cnt<=k;

    }

    int splitArray(vector<int>& arr, int k) {
        
       int low=INT_MAX,high=0;

       for(int x:arr){

        low=min(low,x);
        high+=x;

       }

       while(low<=high){

        int mid=low+(high-low)/2;

        if(isPossible(arr,mid,k)) high=mid-1;
        else low=mid+1;

       }

       return low;

    }
};