class Solution {
public:

    void fn(string &str,int index,string ds,vector<string>& ans,unordered_map<int,string>& mp){

        if(index==str.length()){

            ans.push_back(ds);
            return;

        }

        int digit=str[index]-'0';

        for(int i=0;i<mp[digit].length();i++){

            fn(str,index+1,ds+mp[digit][i],ans,mp);

        }

    }

    vector<string> letterCombinations(string str) {

        unordered_map<int, string> mp = {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };

        vector<string> ans;
        fn(str,0,"",ans,mp);
        return ans;
        
    }
};