class Solution {
public:
    int balancedStringSplit(string str) {
        

        int n=str.length();
        int bal=0,cnt=0;

        if(str[0]=='R') bal++;
        else bal--;

        for(int i=1;i<n;i++){

            if(str[i]=='R') bal++;
            else bal--;

            if(bal==0) cnt++;

        }

        return cnt;       

    }
};