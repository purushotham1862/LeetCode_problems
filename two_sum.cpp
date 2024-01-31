class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> ans;
        int n=nums.size();
        int i=0,j=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (nums[i]+nums[j]==target)
                {
                     
                    return {i,j};//yes u can return 2 values using { }
                    
                }
            }
        }

        return{};//imp oratnet to give empty array if no element found
        
    }
    
};

//optimized

//         class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> numMap;
//         int n = nums.size();

//         // Build the hash table
//         for (int i = 0; i < n; i++) {
//             numMap[nums[i]] = i;
//         }

//         // Find the complement
//         for (int i = 0; i < n; i++) {
//             int complement = target - nums[i];
//             if (numMap.count(complement) && numMap[complement] != i) {
//                 return {i, numMap[complement]};
//             }
//         }

//         return {}; // No solution found
//     }
// };