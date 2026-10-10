class Solution {
public:

    int lbound(vector<int>& arr,int low,int high,int x){

        while(low<high){

            int mid=low+(high-low)/2;

            if(arr[mid]<x) low=mid+1;
            else high=mid;

        }

        return low;

    }

    int lengthOfLIS(vector<int>& arr) {
        
        vector<int> temp;
        temp.push_back(arr[0]);
        int n=arr.size();

        for(int i=1;i<n;i++){

            if(arr[i]<=temp.back()){

                int ind=lbound(temp,0,temp.size()-1,arr[i]);
                temp[ind]=arr[i];

            }else temp.push_back(arr[i]);

        }

        return temp.size();

    }
};