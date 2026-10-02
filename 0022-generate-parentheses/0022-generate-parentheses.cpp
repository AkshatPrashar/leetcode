class Solution {
public:

    void genPar(string str,int open,int close,int n,vector<string>& arr){

        if(str.length()==2*n){

            arr.push_back(str);
            return;

        }

        if(open<n) genPar(str+"(",open+1,close,n,arr);
        if(close<open) genPar(str+")",open,close+1,n,arr);

    }

    vector<string> generateParenthesis(int n) {
        
        vector<string> arr;
        genPar("",0,0,n,arr);
        return arr;

    }
};