class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> duplicates;

        for(int num: nums){
            duplicates[num]++;
        }

        for(auto it: duplicates){
            if(it.second>1){
                return true;
            }
        }

        return false;
    }
};