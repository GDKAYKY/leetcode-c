#include <vector>
#include <unordered_map>
using namespace std;

int forLoop()

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // valor -> índice

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // se já viu o complemento antes, retorna o par
            if (map.find(complement) != map.end()) {
                return { map[complement], i };
            }

            // guarda o valor atual com seu índice
            map[nums[i]] = i;
        }

        return {}; // se não achar nada (nunca deveria acontecer nos testes do LeetCode)
    }
};
