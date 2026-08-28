class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> all;
        for (auto const num : nums){
            all.emplace(num);
        }
        int max = 0;
        for (int i = 0; i < nums.size(); i++){
            int count = 0;
            if (!all.contains(nums[i] - 1)){
               while (all.contains(nums[i] + 1)){
                count++;
                nums[i] += 1;
               }
               count++;
            }
            if (count > max)
                max = count;
        }
        return max;
    }
};
