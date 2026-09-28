class Solution {
public:

    void rev(string& str,int low,int high){

        while(low<high) swap(str[low++],str[high--]);

    }

    int reverseBits(int n) {

        string str="";
        unsigned int x=n;

        while(x>0){

            int p=x%2;
            str+=to_string(p);
            x=x/2;

        }

        int m=str.size();
        string zeros(32-m,'0');
        str+=zeros;
        rev(str,0,str.size()-1);

        long long ans=0,p2=1;

        for(int i=0;i<str.size();i++){

            if(str[i]=='1') ans+=p2;
            p2=p2*2;

        }

        return ans;
        
    }
};