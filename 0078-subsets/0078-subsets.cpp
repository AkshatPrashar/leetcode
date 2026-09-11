class Solution {
public:

    void fn(vector<int>& arr,int index,vector<int>& ds,vector<vector<int>>& ans){

        if(index==arr.size()){

            ans.push_back(ds);
            return;

        }

        ds.push_back(arr[index]);
        fn(arr,index+1,ds,ans);
        ds.pop_back();
        fn(arr,index+1,ds,ans);

    }

    vector<vector<int>> subsets(vector<int>& arr) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        fn(arr,0,ds,ans);
        return ans;

    }
};