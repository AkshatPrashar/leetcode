class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> ans;
        int n=words.size();

        for(int i=0;i<n;i++){

            int m=words[i].length();
            int k=0;

            while(k<m){

                if(words[i][k]==x){

                    ans.push_back(i);
                    break;

                }

                k++;

            }

        }

        return ans;

    }
};