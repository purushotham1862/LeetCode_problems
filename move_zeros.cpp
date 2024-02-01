//brute force

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int k=0;
        for (int i =0;i<nums.size();i++)
         {
             if (nums[i] != 0)
             {
                nums[k++] = nums[i];
             }

         }

         while(k<nums.size())
         {
             nums[k++]=0;
         }
        
    }
};

//optimized

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) 
//     {
//         int i = 0;
//         int j = 1;
//         while(j<nums.size())
//         {
//             if(nums[i] == 0 && nums[j] != 0)
//             {
//                 int temp = nums[j];
//                 nums[j] = nums[i];
//                 nums[i] = temp;
//                 i++;
//                 j++;
//             }
//             else if(nums[i] == 0 && nums[j] == 0)
//             {
//                 j++;
//             } 
//             else
//             {
//                 i++;
//                 j++;
//             }
//         }
//     }
// };