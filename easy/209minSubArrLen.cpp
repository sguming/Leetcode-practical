class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = 999999;
        int right = nums.size();
        for (int x = 0; x < right; x++) {
            int he = 0;
            for (int j = x; j < right; j++) {
                he = he + nums[j];
                if (he >= target) {
                    if (length > j - x + 1) {
                        length = j - x + 1;
                        break;
                    }
                }
            }
        }
        if (length == 999999) {
            return 0;
        }
        return length;
    }
};

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = 999999;
        int right = nums.size();
        int he = 0;
        int j = 0;
        for (int i = 0; i < right; i++) {
            he = he + nums[i];
            while ( he >=target&&j<=i) {
                if (length >= i - j + 1) {
                    length = i - j + 1;
                }
                he = he - nums[j];
                j++;
            }
        }
        if (length == 999999) {
            return 0;
        }
        return length;
    }
};