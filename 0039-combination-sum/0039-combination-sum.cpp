class Solution {
public:

    void fn(vector<int>& arr,int index,int target,vector<int>& ds,vector<vector<int>>& ans){

        if(index==arr.size()){

            if(target==0){

                ans.push_back(ds);

            }

            return;

        }

        if(arr[index]<=target){

            ds.push_back(arr[index]);
            fn(arr,index,target-arr[index],ds,ans);
            ds.pop_back();

        }

        fn(arr,index+1,target,ds,ans);

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;

        fn(arr,0,target,ds,ans);

        return ans;

    }
};