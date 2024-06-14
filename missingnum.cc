#include <vector>
#include <iostream>

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    std::vector<int> result;
    int n = nums.size();

    // Marking the numbers that appear
    for (int i = 0; i < n; ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    // Finding the numbers that do not appear
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> disappeared = findDisappearedNumbers(nums);
    
    std::cout << "Numbers that do not appear: ";
    for (int num : disappeared) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}