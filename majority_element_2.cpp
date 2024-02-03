//brute forcr but wrong
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) 
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         vector <int> v;
//         if((n/3) == 0 )
//         {
//             v=nums;
//         }
//         else
//         {
//         v.push_back (nums[n/3]);
//         }
//         return v;
        
//     }
// };

//learn,got this code from gpt 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        vector<int> ans;
        int n = nums.size();

        for (int num : nums) {
            count[num]++;
        }

        for (auto& entry : count) {
            if (entry.second > n / 3) {
                ans.push_back(entry.first);
            }
        }

        return ans;
    }
};
