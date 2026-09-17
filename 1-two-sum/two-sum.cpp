#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store: Key = Number value, Value = Index of that number
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the index of the complement and the current index
                return {numMap[complement], i};
            }
            
            // If not found, store the current number and its index in the map
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (LeetCode guarantees one exists)
        return {};
    }
};

