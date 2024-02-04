// //using extra space or array
// //not inplace

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k)
//     {
       
//         int z=0;
//         int n = nums.size();
//          vector<int> v(n) ;

//         for(int i=0;i<n;i++)
//         {
//           z = (i+k) % n;
//           v[z] = nums[i];

//         }
//         nums=v;
//     }
// };


// optimized and good logic check-it-out!!

void reverse(vector<int>& nums, int l, int r) {
    while (l < r)
      swap(nums[l++], nums[r--]);
  }


class Solution {

 public:
  void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
  }

 
};