class Solution {
public:
    string replaceWords(vector<string>& dict, string sent) {
        
        sort(dict.begin(),dict.end());
        
        int i=0;
        string word="";
        int n=sent.length();
        string ans="";

        while(i<n){

            word="";
            while(i<n && sent[i]!=' ') word+=sent[i++];

            bool flag=false;
            for(int l=0;l<dict.size();l++){

                int m=word.length(),k=0;
                int p=dict[l].length();
                while(k<min(m,p) && word[k]==dict[l][k]) k++;
                if(k==dict[l].length()){

                    flag=true;
                    ans+=dict[l];
                    break;

                } 

            }

            if(!flag) ans+=word;
            if(i!=n) ans+=" ";
            i++;

        }

        return ans;

    }
};