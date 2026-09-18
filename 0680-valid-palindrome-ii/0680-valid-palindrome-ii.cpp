class Solution {
public:

    bool ispal(string& str){

        int low=0,high=str.length()-1;
        while(low<high){

            if(str[low++]!=str[high--]) return false;

        }

        return true;

    }

    bool validPalindrome(string str) {

        int n=str.length();

        int low=0,high=n-1;

        while(low<high){

            if(str[low]!=str[high]){

                string s=str.substr(0,low);
                s+=str.substr(low+1,n-low+1);

                string p=str.substr(0,high);
                p+=str.substr(high+1,n-high+1);

                if(ispal(s) || ispal(p)) return true;
                else return false;

            }
            low++;
            high--;

        }

        return true;
        
    }
};