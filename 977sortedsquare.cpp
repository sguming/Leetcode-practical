class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int target = right;
        vector<int> array(right + 1, 0);
        while (left <= right) {
            int x = nums[left] * nums[left];
            int y = nums[right] * nums[right];
            if (x > y) {
                array[target] = x;
                left++;

            } else {
                array[target] = y;
                right--;
            }
            target--;
        }
        return array;
    }
};