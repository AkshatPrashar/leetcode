class Solution {
public:

    int lbound(vector<int>& arr,int k){

        int n=arr.size();
        int low=0,high=n-1,ans=-1;

        while(low<=high){

            int mid=low+(high-low)/2;

            if(arr[mid]>=k){

                high=mid-1;
                ans=arr[mid];

            }
            else low=mid+1;

        }

        if(ans!=k || low==n) return -1;
        return low;

    }

    int ubound(vector<int>& arr,int k){

        int low=0,high=arr.size()-1;

        while(low<=high){

            int mid=low+(high-low)/2;

            if(arr[mid]>k){

                high=mid-1;

            }
            else low=mid+1;

        }

        return low;

    }

    vector<int> searchRange(vector<int>& arr, int target) {

        int startIndex=lbound(arr,target);

        if(startIndex==-1) return {-1,-1};

        int endIndex=ubound(arr,target)-1;

        return {startIndex,endIndex};

    }
};