class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {

        int n=arr.size(),m=arr[0].size();
        int low=0,high=n*m-1;

        while(low<=high){

            int mid=low+(high-low)/2;

            int right=mid%m,left=mid/m;

            if(arr[left][right]<target) low=mid+1;
            else if(arr[left][right]>target) high=mid-1;
            else return true;

        }

        return false;
        
    }
};