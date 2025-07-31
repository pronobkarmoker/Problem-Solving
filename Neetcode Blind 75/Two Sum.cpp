#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> sol;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (sol.count(complement)) {
                return {sol[complement], i};
            }
            sol[nums[i]] = i;
        }
        return {}; 
    }   
};
