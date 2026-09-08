class Solution {
public:
    int countCommas(int n) {
        
        int digit=log10(n)+1;

        if(digit<3) return 0;
        else if(digit==4){

            return n-1000+1;

        }
        else if(digit==5){

            return n-10000+1+9000;

        }
        else if(digit==6){

            return 1+90000+9000;

        }

        return 0;

    }
};