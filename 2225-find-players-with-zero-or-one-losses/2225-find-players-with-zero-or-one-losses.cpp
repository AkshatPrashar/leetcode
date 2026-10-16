class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        
        map<int,pair<bool,int>> mp;

        for(int i=0;i<arr.size();i++){

           if(mp.find(arr[i][0])==mp.end()) mp[arr[i][0]]={true,0};
           mp[arr[i][1]].first=false;
           mp[arr[i][1]].second++;

        }

        vector<vector<int>> ans;
        vector<int> win;
        vector<int> loose;

        for(auto it:mp){

            if(it.second.first==true) win.push_back(it.first);
            else{

                if(it.second.second==1) loose.push_back(it.first);

            }

        }

        ans.push_back(win);
        ans.push_back(loose);
        return ans;

    }
};