class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int maj=0, count = 1;
        for (int num=1;num<nums.size();num++) {
            if (nums[maj] == nums[num]) {
                ++count;
            } 
            else {
                --count;
            }
            if (count == 0) {
                maj = num;
                count = 1;
            }
        }
        count=0;
        for (int num=0;num<nums.size();num++) {
            if (nums[maj] == nums[num]) {
                ++count;
            }
        }
        return nums[maj];
    }
};
