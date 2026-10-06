class Solution {
public:
    int minAddToMakeValid(string str) {
        
        int level=0;
        int cnt=0,n=str.length();

        for(int i=0;i<n;i++){

            if(str[i]=='(') level++;
            else level--;

            if(level<0){

                cnt++;
                level=0;

            }

        }

        if(level==0) return cnt;
        else return cnt+level;

    }
};