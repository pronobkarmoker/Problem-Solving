#include <vector>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0 ; i<= sizeof(nums); i++){
        //     for(int j = 1 ; j<= sizeof(nums); j++){
        //         if(nums[i]== nums[j]){
        //             return true ;
        //             break;
        //         }
        //         else {
        //             return false ;
        //         }
        //     }
        // }
        // if (nums[]== null ){
        //     return true;
        // }

        std::unordered_set<int> seen;
        for(int num : nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;

    }
};