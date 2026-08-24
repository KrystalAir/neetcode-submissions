class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        int k = nums.size() - 1;
        while (i < nums.size() && nums[i] <= 0){
            int target = nums[i] * (-1);
            vector<int> tri;
            while(j < k){
                int sum = nums[j] + nums[k];
                if (sum == target){
                    tri.assign({nums[i], nums[j], nums[k]});
                    if (find(res.begin(), res.end(), tri) == res.end())
                        res.emplace_back(tri);
                        j++;
                        k--;
                }
                if (sum > target){
                    k--;
                }
                if (sum < target){
                    j++;
                }
            }
            i++;
            j = i + 1;
            k = nums.size() - 1;
        }
        return res;
    }
};
