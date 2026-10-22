class Solution {
public:


    vector<int> findEvenNumbers(vector<int>& arr) {
        
       vector<int> ans;
        int n = arr.size();
        vector<bool> seen(1000, false);

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) continue;

            for (int j = 0; j < n; j++) {
                if (j == i) continue;

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    if (arr[k] % 2 != 0) continue;

                    int num = arr[i]*100+arr[j]*10+arr[k];

                    if (!seen[num]) {
                        ans.push_back(num);
                        seen[num] = true;
                    }
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;

    }
};