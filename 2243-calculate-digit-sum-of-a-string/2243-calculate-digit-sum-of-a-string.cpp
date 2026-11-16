class Solution {
public:
    string digitSum(string s, int k) {
        
        string ans="";
        string dummy=s;
        int len=0;

        while(dummy.length()>k){

            int n=dummy.length(),len=0;
            while(len<n){

                int cnt=0,sum=0;
                while(len<n && cnt<k){

                    sum+=(dummy[len]-'0');
                    cnt++;
                    len++;

                }

                ans+=to_string(sum);

            }
            dummy=ans;
            ans="";

        }

        return dummy;

    }
};