class Solution {
public:
    long long countCommas(long long n) {

        int digit = 0;
        long long temp = n;

        while(temp > 0){
            digit++;
            temp /= 10;
        }

        if(digit-3<=0) return 0; 
        
        if(digit-3<=3) return n-999;

        if(digit-3<=6){

            long long sum=2*(n-999999);
            sum += 999000;
            return sum;


        }

        if(digit-3<=9){

            long long sum=3*(n-999999999);
            sum+=2*(999999999-999999);
            sum += 999000;
            return sum;


        }
        else if(digit-3<=12){

            long long sum=4*(n-999999999999);
            sum+=3*(999999999999-999999999);
            sum+=2*(999999999-999999);
            sum += 999000;
            return sum;


        }

        

        return 3998998998999005;
        
    }
};