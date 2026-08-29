class Solution {
public:

    void reverse(string &str,int low,int high){

        while(low<high) swap(str[low++],str[high--]);

    }

    string reverseStr(string str, int k) {

        int n=str.length();
        int i=0;

        int m=i+k-1;
        if(m>=n){

            reverse(str,0,str.length()-1);
            return str;

        }

        while(i<n){

            int m=i+k-1;
            if(m>=n){

                reverse(str, i, n - 1);
                break;

            }
            reverse(str,i,m);
            i=i+2*k;

        }

        return str;

    }
};