class Solution {
public:
    char findTheDifference(string s, string t) {

        map<int,int> mp;

        for(char x:s) mp[x]++;
        for(char x:t) mp[x]++;

        for(auto it:mp){

            if(it.second&1) return it.first;

        }

        return 'a';
        
    }
};