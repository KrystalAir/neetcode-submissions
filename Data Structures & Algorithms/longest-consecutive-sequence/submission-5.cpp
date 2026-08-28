class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;

        unordered_set<int> all;
        for (auto const &num : nums){
            all.emplace(num);
        }
        int max = 0;
        for (int i = 0; i < nums.size(); i++){
            int current = nums[i];
            int count = 1;
            if (!all.contains(current - 1)){
               while (all.contains(current + 1)){
                count++;
                current += 1;
               }
            }
            if (count > max)
                max = count;
        }
        return max;
    }
};
