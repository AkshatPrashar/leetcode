class Solution {
public:
    string removeOuterParentheses(string s) {
        
       int level=0,n=s.length();
       string ans="";

       for(int i=0;i<n;i++){

            if(s[i]=='('){

                level++;
                if(level>1) ans+=s[i];

            }else{

                if(level>1) ans+=s[i];
                level--;

            }

       }

       return ans;

    }
};