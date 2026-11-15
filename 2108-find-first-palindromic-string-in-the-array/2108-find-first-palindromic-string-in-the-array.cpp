class Solution {
public:

    bool isPal(string &str,int low,int high){

        while(low<high){

            if(str[low++]!=str[high--]) return false;

        }

        return true;

    }

    string firstPalindrome(vector<string>& words) {

        int n=words.size();
        for(int i=0;i<n;i++){

            if(isPal(words[i],0,words[i].length()-1)) return words[i];

        }

        return "";

    }
};