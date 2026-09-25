class Solution {
public:
    int findComplement(int num) {

        if(num==0) return 1;

        int x=num;
        string str="";

        while(x>0){

            int p=x%2;
            str+=to_string(p);
            x=x/2;

        }

        long long ans=0,p2=1;

        for(int i=0;i<str.length();i++){

            if(str[i]=='0') ans+=p2;
            p2=p2*2;

        }

        return ans;
        
    }
};