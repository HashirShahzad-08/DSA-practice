class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans = ans ^ val;   //XOR operation same same = 0
        }
        return ans;
    }
};