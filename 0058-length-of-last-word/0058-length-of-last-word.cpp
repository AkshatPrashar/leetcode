class Solution {
public:
    int lengthOfLastWord(string str) {
        
        int n=str.length();
        int i=n-1,ind=-1;

        while(i>=0){

            while(i>=0 && str[i]==' ') i--;

            if(i==-1) break;

            ind=i;
            while(ind>=0 && str[ind]!=' ') ind--;
            break;

        }

        if(i==-1) return 0;

        return i-ind;

    }
};