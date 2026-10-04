class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        unsigned int last=0;
        if((n&1)==0) last=1;

        unsigned int num=(n<<1)+last;

        unsigned int ans=n^num;
        while(ans>0){

            unsigned int p=ans%2;
            if(!p) return false;
            ans=ans/2;

        }

        return true;

    }
};