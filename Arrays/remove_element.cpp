class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            if (nums[start] == val) {

                while (start < end && nums[end] == val) {
                    end--;
                }

                nums[start] = nums[end];
                end--;
            }

            start++;
        }

        return end + 1;
    }
};