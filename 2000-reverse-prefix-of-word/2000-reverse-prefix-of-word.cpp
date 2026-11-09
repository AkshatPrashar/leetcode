class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int index=-1,n=word.length();
        for(int i=0;i<n;i++){

            if(word[i]==ch){

                index=i;
                break;

            }

        }

        if(index==-1) return word;

        int low=0,high=index;
        while(low<high) swap(word[low++],word[high--]);

        return word;

    }
};