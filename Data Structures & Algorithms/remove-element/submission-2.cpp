class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int i = 0;
        while(i<n && nums[i]!=val){
            i++;
        }

        for(int j=i+1; j<n; j++){
            if(nums[j]!=val){
                swap(nums[i], nums[j]);
                if(i<n)
                    i++;
            }
        }

        return i;
    }
};