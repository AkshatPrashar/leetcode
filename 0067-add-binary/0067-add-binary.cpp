class Solution {
public:

    void rev(string& str,int low,int high){

        while(low<high) swap(str[low++],str[high--]);

    }

    string addBinary(string a, string b) {
        
        string ans="";
        int carry=0;
        int i=a.length()-1,j=b.length()-1;

        while(i>=0 && j>=0){

            int cnt=0;
            if(carry) cnt++;
            if(a[i]=='1') cnt++;
            if(b[j]=='1') cnt++;

            if(cnt==0) ans+="0";
            else if(cnt==1){

                ans+="1",carry=0;

            }
            else if(cnt==2){

                ans+="0",carry=1;

            }else{

                ans+="1",carry=1;

            }

            i--,j--;

        }

        for(;i>=0;i--){

            int cnt=0;
            if(carry) cnt++;
            if(a[i]=='1') cnt++;

            if(cnt==0) ans+="0";
            else if(cnt==1){

                ans+="1";
                carry=0;

            }else{

                ans+="0";
                carry=1;

            }

        }

        for(;j>=0;j--){

            int cnt=0;
            if(carry) cnt++;
            if(b[j]=='1') cnt++;

            if(cnt==0) ans+="0";
            else if(cnt==1){

                ans+="1";
                carry=0;

            }else{

                ans+="0";
                carry=1;

            }

        }

        if(carry) ans+="1";

        rev(ans,0,ans.length()-1);

        return ans;

    }
};