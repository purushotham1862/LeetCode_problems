//Approach-1 -> BruteForce : O(logn)

/*

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int val=0;


        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>2){
                nums[i]=INT_MAX;
                val++;
            }
        }

        sort(nums.begin(),nums.end());

        return n-val;
        
    }
};

*/

// Approach-2 : Optimized approach -> Two pointers : O(n)


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0;

        for(int j : nums){
            if(i==0 || i==1 || nums[i-2]!=j){
                nums[i]=j;
                i++;
            }
        }

        return i;
        
    }
};