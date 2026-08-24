class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0)
                break;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;
                
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0){
                    vector<int> tri;
                    tri.assign({nums[i], nums[j], nums[k]});
                    res.emplace_back(tri);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]){
                        j++;
                    }
                }
                else if (sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
    return res;
    }
};
