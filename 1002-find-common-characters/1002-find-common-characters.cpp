class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        int n=words.size();
        string word=words[0];
        vector<string> ans;    

        for(int i=1;i<n;i++){

            map<char,int> mp1;
            map<char,int> mp2;

            for(char x:word) mp1[x]++;
            for(char x:words[i]) mp2[x]++;

            word="";
            for(auto it:mp1){

                if(mp2.find(it.first)!=mp2.end()){

                    for(int i=1;i<=min(it.second,mp2[it.first]);i++) word+=it.first;

                }

            }

        }

        for(char x:word) ans.push_back(string(1,x));

        return ans;

    }
};