class Solution {
public:

    void solve(string& str,int index,string cur,long long calc,long long prev,int x,vector<string>& ans){

        if(index==str.length()){

            if(calc==x) ans.push_back(cur);
            return;

        }


       long long num=0; 
       for (int i = index; i < str.length(); i++) {

        if (i > index && str[index] == '0')
            break;

        num=num*10+(str[i]-'0');

        string snum = str.substr(index, i - index + 1);

        if(index==0){

            solve(str,i+1,snum,num,num,x,ans);

        }else{

            solve(str, i + 1, cur + "+" + snum,calc+num,num, x, ans);
            solve(str, i + 1, cur + "-" + snum,calc-num,-num, x, ans);
            solve(str, i + 1, cur + "*" + snum,calc-prev+prev*num,prev*num, x, ans);

        }
    }

    }

    vector<string> addOperators(string str, int x) {
        
        vector<string> ans;

        solve(str,0,"",0,0,x,ans);

        return ans;

    }
};