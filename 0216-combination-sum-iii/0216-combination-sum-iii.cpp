class Solution {
public:

    void fn(int k,int n,int index,int sum,vector<int>& ds,vector<vector<int>>& ans){

        if(ds.size()==k){

            if(sum==n) ans.push_back(ds);
            return;

        }

        if(index>9) return;

        ds.push_back(index);
        fn(k,n,index+1,sum+index,ds,ans);
        ds.pop_back();
        fn(k,n,index+1,sum,ds,ans);

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        fn(k,n,1,0,ds,ans);
        return ans;

    }
};