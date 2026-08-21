class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> appear;
        for (int i = 0; i < nums.size(); i++){
            appear[nums[i]]++;
        }
        for (auto &x : appear){
            if (x.second > 1)
                return true;
        }
        return false;
    }
};