// class Solution
// {
//  public:
//     int majorityElement(vector<int>& nums) 
//     {
//         int count = 0,z=0;
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//              count=0;
//             for(int j=0;j<n;j++)
//             {
               
//                 if(nums[i] == nums[j])
//                 {
//                     count ++;
//                 }
//             }
//             z=nums[i];
//             if (count > (n/2))
//             break;
//         }
//         return z;
//     }
// };

// wow == mind blown
// do check out other 2 methods to solve in soln
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};