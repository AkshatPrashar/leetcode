class Solution {
public:

    void fn(vector<int>& arr,int index,int k,vector<int>& ds,vector<vector<int>>& ans){

       if(k==0){

            ans.push_back(ds);
            return;

       }

       for(int i=index;i<arr.size();i++){

            if(i>index && arr[i]==arr[i-1]) continue;

            if(arr[i]>k) break;

            ds.push_back(arr[i]);
            fn(arr,i+1,k-arr[i],ds,ans);
            ds.pop_back();

       }

    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int k) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(),arr.end());
        fn(arr,0,k,ds,ans);
        return ans;

    }
};