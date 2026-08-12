class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
       vector<int> ans(n);
       
        int posCounter = 0;
        int negCounter = 1;
       
        for( int i=0; i<n; i++) {
          
        if(nums[i] > 0) {
            ans[posCounter] = nums[i];
            posCounter+=2;
        }

        else {
            ans[negCounter] = nums[i];
            negCounter+= 2;
        }

        }

          return ans;
    }
};