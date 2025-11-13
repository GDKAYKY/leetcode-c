#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            if (int complement = target - nums[i]; map.find(complement) != map.end()) {
                return { map[complement], i };
            }

            map[nums[i]] = i;
        }

        return {};
    }
};