class Solution {
public:
    bool checkValidString(string s) {
        
        int level=0;
        int rangeMax=0,rangeMin=0;

        for(int i=0;i<s.length();i++){

            if(s[i]=='(') rangeMin++,rangeMax++;
            else if(s[i]==')'){

                if((rangeMin-1)==-1 && rangeMax>0){

                    rangeMax--;
                    continue;

                }
                rangeMin--,rangeMax--;
                if(rangeMax==-1) return false;

            }else{

                int a=rangeMin-1==-1?0:rangeMin-1,b=rangeMin,c=rangeMin+1;
                rangeMin=min({a,b,c});

                a=rangeMax-1,b=rangeMax,c=rangeMax+1;
                rangeMax=max({a,b,c});

            }

        }

        if(rangeMin<=0) return true;
        return false;

    }
};