class Solution {
public:
    int buyChoco(vector<int>& arr, int money) {
        
        int min=102,smin=101;

        for(int x: arr){

            if(x<min){

                smin=min;
                min=x;

            }else if(x>=min && x<smin){

                smin=x;

            }

        }

        int x=money;
        x=x-(min+smin);
        if(x<0) return money;

        return x;
    }
};