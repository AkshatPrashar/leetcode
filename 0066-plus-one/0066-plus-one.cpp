class Solution {
public:

    int helper(vector<int>& arr,int n,int ind){

        if(ind==n) return 1;

        int carry=helper(arr,n,ind+1);

        arr[ind]=arr[ind]+carry;

        if(arr[ind]<10) return 0;

        arr[ind]=0;

        return 1;

    }

    vector<int> plusOne(vector<int>& arr) {
        
        int n=arr.size();
        int carry=helper(arr,n,0);
        if(carry){

            arr[0]=1;
            arr.push_back(0);

        }

        return arr;

    }
};