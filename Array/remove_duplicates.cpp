/*26. Remove Duplicates from Sorted Array: Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //use the unique function to remove consecutive duplicates in range
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};
