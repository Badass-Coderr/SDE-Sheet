/*
75. Sort colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0, two = n-1;
        int i = 0;
        while(zero <= two && i <= two){
            if(nums[i] == 2){
                swap(nums[i], nums[two--]);
                i--;
            }
            else if(nums[i] == 0){
                swap(nums[i], nums[zero++]);
            }
            i++;
        }
    }
};