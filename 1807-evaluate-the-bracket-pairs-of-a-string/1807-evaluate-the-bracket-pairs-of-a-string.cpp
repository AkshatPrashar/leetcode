class Solution {
public:
    string evaluate(string str, vector<vector<string>>& arr) {
        
        int len=str.length();
        if(len<=1) return str;
        map<string,string> mp;
        int n=arr.size();

        for(int i=0;i<n;i++){

            mp[arr[i][0]]=arr[i][1];

        }

        
        int i=0;
        string ans="";
        vector<vector<string>> v;
        int start=-1,finish=-1;

        while(i<len){

            if(str[i]=='('){

                start=i++;
                string s="";
                while(i<len && str[i]!=')') s+=str[i++];
                finish=i;
                if(mp.find(s)!=mp.end()) v.push_back({to_string(start),to_string(finish),mp[s]});
                else  v.push_back({to_string(start),to_string(finish),"?"});
                i++;


            }else i++;

        }

        int k=v.size();
        int j=0;

        for(int i=0;i<k;i++){

            while(j<len && str[j]!='('){

                ans+=str[j];
                j++;

            }
            int l=v[i][2].length();
            int f=0;
            while(f<l) ans+=v[i][2][f++];
            j = stoi(v[i][1]) + 1;

        }

        while(j<len && str[j]!='('){

                ans+=str[j];
                j++;

        }

        return ans;

    }
};