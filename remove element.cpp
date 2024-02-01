//brute force failed to work as wrong logic

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) 
//     {
//         //int count =0;
//         for (int i =0;i<nums.size();i++)
//         {
//             if (nums[i] == val)
//             {
//                 nums[i] = 423;
               
//             }
//         }

//         return 0;

        

//         // for (int i =0;i<nums.size();i++)
//         // {
//         //     if (arr[i] == 423)
//         //     {

//         //     }
//         // }
        
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

//optimized is to used while instead of for

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {


//         int i=0,n=nums.size(),j=0;
//         while(i<n)
//         {
//             if(nums[i]!=val)
//             {
//                 nums[j++]=nums[i];
//             }
//             i++;
//         }
//         return j;
//     }
// };