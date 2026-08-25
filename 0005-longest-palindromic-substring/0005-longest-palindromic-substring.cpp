class Solution {
public:
    string longestPalindrome(string str) {
        
        int n=str.length(),maxi=1;
        string ans=string(1,str[0]);

        for(int i=0;i<n;i++){

            int left=i-1,right=i+1;

            while((left>=0 && right<n) && (str[left]==str[right])){

                left--;
                right++;

            }

            left++,right--;
            int len=right-left+1;
            if(maxi<len){

                ans=str.substr(left,len);
                maxi=len;

            }

            left=i,right=i+1;

            while((left>=0 && right<n) && (str[left]==str[right])){

                left--;
                right++;

            }

            left++,right--;
            len=right-left+1;
            if(maxi<len){

                ans=str.substr(left,len);
                maxi=len;

            }

        }

        return ans;

    }
};