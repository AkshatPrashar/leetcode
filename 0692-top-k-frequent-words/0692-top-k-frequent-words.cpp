class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> mp;

        for(int i=0;i<words.size();i++) mp[words[i]]++;

        vector<string> ans;

        for(auto &it:mp) ans.push_back(it.first);

        sort(ans.begin(), ans.end(), [&](string &a, string &b) {
            if(mp[a] == mp[b]) return a < b;
            return mp[a] > mp[b];
        });

        ans.resize(k);
        return ans;

    }
};