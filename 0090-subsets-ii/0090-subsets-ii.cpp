class Solution {
public:

    void fn(vector<int>& arr,int index,vector<int>& ds,vector<vector<int>>& ans){

        ans.push_back(ds);

        for(int i=index;i<arr.size();i++){

            if(i>index && arr[i]==arr[i-1]) continue;

            ds.push_back(arr[i]);
            fn(arr,i+1,ds,ans);
            ds.pop_back();

        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {

        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(),arr.end());
        fn(arr,0,ds,ans);
        return ans;
        
    }
};