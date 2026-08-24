class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.length();
        string words="";
        int i=n-1;

        while(i>=0){

            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;

            int ind=i;
            while(ind>=0 && s[ind]!=' ') ind--;

            string word=s.substr(ind+1,i-ind);

            if(!words.empty()) words+=" ";

            words+=word;

            i=ind;

        }

        return words;
        
    }
};