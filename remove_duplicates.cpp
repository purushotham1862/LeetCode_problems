// this will not work becos when we consider next element what will u do for last elememnt!!!
//class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) 
//     {
//         int i=0,n=nums.size(),j=0;
//             while(i<n)
//             {
//                 if(nums[i] != nums[i+1])
//                 {
//                 nums[j++] = nums[i];
//                 }
//                 i++;
//             }
//             return j;

//     }
// };


//so consider previous element instead of next element
//why j also 1 why not j=0???

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) 
//     {
//         int i=1,n=nums.size(),j=1;
//             while(i<n)
//             {
//                 if(nums[i] != nums[i-1])
//                 {
//                 nums[j++] = nums[i];
//                 }
//                 i++;
//             }
//             return j;

//     }
// };

//optimized in ultimate way see once 
//why l+1??

class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            if (nums.size() == 0) return 0;
            int l = 0;
            for (int r = 1; r < nums.size(); r++)
            {
                if (nums[l] != nums[r])
                    l++;
                nums[l] = nums[r];
            }
            return l + 1;
        }
};

