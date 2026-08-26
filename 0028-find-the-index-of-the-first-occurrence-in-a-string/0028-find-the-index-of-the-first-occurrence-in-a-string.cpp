class Solution {
public:
    int strStr(string a, string b) {
        
        int i=0,j=0,k=0;
        int n=a.size(),m=b.size();
        if(m>n) return -1;

        for(i=0;i<n;i++){

            if(a[i]==b[k]){

                while((j<n && k<m) && a[j]==b[k]){

                    j++;
                    k++;

                }

                if(k==m) return i;
                else{

                    j=i;
                    k=0;

                }

            }

            j++;

        }

        return -1;

    }
};