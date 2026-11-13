class Solution {
public:
    int minSwaps(string str) {
        
        int n=str.size(),cnt=0;
        int i=0,j=n-1;
        int level=0;

        while(i<j){

            while(i<j){

                if(str[i]=='[') level++;
                else level--;

                if(level<0) break;

                i++;

            }
            if(i==j) break;

            while(j>i && str[j]==']') j--;

            if(j==i) break;
            swap(str[i],str[j]);
            cnt++;
            level=1;
            i++;
            j--;

        }

        return cnt;


    }
};