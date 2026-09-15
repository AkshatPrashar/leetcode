class Solution {
public:

    bool isPal(string& str){

        int low=0,high=str.length()-1;

        while(low<high){

            if(str[low]!=str[high]) return false;
            low++;
            high--;

        }
        return true;

    }

    void fn(string& str,string cur,int index,vector<string>& ds,vector<vector<string>>& ans){

        if(index==str.length()){

            ans.push_back(ds);
            return;

        }

        for(int i=index;i<str.length();i++){

            string s=str.substr(index,i+1-index);

            if(!isPal(s)) continue;

            ds.push_back(s);
            fn(str,cur+s,i+1,ds,ans);
            ds.pop_back();

        }

    }

    vector<vector<string>> partition(string str) {
        
        vector<vector<string>> ans;
        vector<string> ds;
        fn(str,"",0,ds,ans);
        return ans;

    }
};