#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>

std::vector<std::pair<int, int>> findNumberPairs(const std::vector<int>& nums, int target) {
    std::unordered_set<int> numSet; 
    
    std::vector<std::pair<int, int>> pairs;  
    
    for (int num : nums) {
        int complement = target - num;
        if (numSet.find(complement) != numSet.end()) {
            
            pairs.push_back(std::make_pair(num, complement));
        }
        
        
        numSet.insert(num);
    }
    
    return pairs;
}

int main() {
    std::vector<int> nums = {1, 2, 5, 7, 9, 6, 11};
    int target = 12;

    std::vector<std::pair<int, int>> pairs = findNumberPairs(nums, target);
    for (const auto& pair : pairs) {
        std::cout << pair.first << " and " << pair.second << std::endl;
    }
    
    return 0;
}

