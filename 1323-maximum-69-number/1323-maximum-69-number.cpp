class Solution {
public:
    int maximum69Number (int n) {

        string num=to_string(n);
        int flag=-1;

        for(int i=0;i<num.length();i++){

            if(num[i]=='6'){

                flag=i;
                break;

            }

        }

        if(flag==-1) return n;

        num[flag]='9';
        return stoi(num);
        
    }
};