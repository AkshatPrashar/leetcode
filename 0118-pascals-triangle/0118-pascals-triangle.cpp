class Solution {
public:

    vector<int> GenerateRows(int n){

        vector<int> ans;
        ans.push_back(1);
        if(n==1) return ans;

        long long last=1;

        for(int i=1;i<n;i++){

            last=(last*(n-i))/i;
            ans.push_back(last);

        }

        return ans;

    }

    vector<vector<int>> generate(int n) {

       vector<vector<int>> ans;

       for(int i=1;i<=n;i++){

        vector<int> temp=GenerateRows(i);
        ans.push_back(temp);

       }

       return ans;
        
    }
};