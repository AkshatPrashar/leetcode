class Solution {
public:

    string reverse(string &str,int low,int high){

        while(low<high) swap(str[low++],str[high--]);

        return str;

    }

    string reverseWords(string s) {
        
        int i=0,n=s.length();
        string ans="";


        while(i<n){

            string str="";
            while(i<n && s[i]!=' ') str+=s[i++];

            ans+=reverse(str,0,str.length()-1);
            if(i<n) ans+=" ";
            i++;
            
        }

        return ans;

    }
};