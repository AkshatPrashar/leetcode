class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        
        unordered_map<int,int> mp;
        int n=order.size();
        vector<int> ans;

        for(int x:friends) mp[x]++;

        for(int x:order){

            if(mp[x]) ans.push_back(x);

        }

        return ans;

    }
};