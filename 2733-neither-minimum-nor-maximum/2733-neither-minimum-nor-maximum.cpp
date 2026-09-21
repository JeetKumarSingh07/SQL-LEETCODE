class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n =nums.size();
        
        int maxi =nums[0];
        for(int i =0;i<n;i++){
            if(nums[i]>maxi)
            maxi =nums[i];
        }

    int mini = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < mini) {
            mini = nums[i];
        }
    }
        for(int i=0;i<n;i++){
            if(nums[i]!=maxi&&nums[i]!=mini)
            return nums[i];

        }
        return -1;
       
        
    }
};