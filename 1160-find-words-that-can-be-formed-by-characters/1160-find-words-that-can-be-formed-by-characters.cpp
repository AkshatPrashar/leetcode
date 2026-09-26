class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        map<char,int> outer_map;
        int n=words.size();
        for(char x:chars) outer_map[x]++;
        int ans=0;

        for(int i=0;i<n;i++){

            map<char,int> inner_map;
            for(char x:words[i]) inner_map[x]++;
            bool valid=true;
            for(auto it:inner_map){

                int occ_main=outer_map[it.first];
                int occ_in=it.second;
                if(occ_main==0 || occ_in>occ_main){

                    valid=false;
                    break;

                }

            }
            if(valid) ans+=words[i].length();

        }

        return ans;

    }
};