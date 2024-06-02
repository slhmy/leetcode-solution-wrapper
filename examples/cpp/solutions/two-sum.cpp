// Problem: https://leetcode.com/problems/two-sum/

#include <iostream>
#include <string>
#include <vector>
#include "../helper/input.h"
#include "../helper/output.h"

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> val_idx_map;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto it = val_idx_map.find(target - nums[i]);
            if (it != val_idx_map.end())
                return {it->second, i};
            val_idx_map[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    cout << "two-sum" << endl;
    // Read the input in JSON data format
    auto nums = read_vector_from_json_str<int>();
    int target;
    cin >> target;

    // Run the solution
    Solution solution;
    auto output = solution.twoSum(nums, target);

    // Print the output
    print_vector_as_json<int>(output);
}