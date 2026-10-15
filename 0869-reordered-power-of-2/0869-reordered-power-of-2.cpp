class Solution {
public:
    bool reorderedPowerOf2(int n) {

        if(n==0 || n==100) return false;
        if(n==1 || n==2 || n==4 || n==8) return true;

        int num_digit=0;
        map<int,int> mp1;

        long long x=n;
        while(x>0){

            num_digit++;
            int p=x%10;
            mp1[p]++;
            x=x/10;

        }

        long long i=16;
        while(true){

            int i_digit=0;
            x=i;
            map<int,int> mp2;
            while(x>0){

                i_digit++;
                int p=x%10;
                mp2[p]++;
                x=x/10;

            }

            if(i_digit>num_digit) break;

            bool valid=true;
            for(auto it:mp1){

                if(mp2[it.first]==0 || it.second!=mp2[it.first]){

                    valid=false;
                    break;

                }

            }

            if(valid) return true;
            i=i*2;

        }

        return false;

    }
};