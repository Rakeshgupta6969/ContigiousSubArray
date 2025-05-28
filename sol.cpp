class Solution {
    public:
        bool checkSubarraySum(vector<int>& nums, int k) {
            unordered_map<int, int> remainderIndex;
            remainderIndex[0] = -1;  
            int sum = 0;
    
            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                if (k != 0) sum %= k;
                if (remainderIndex.find(sum) != remainderIndex.end()) {
               
                    if (i - remainderIndex[sum] >= 2) return true;
                } else {
                  
                    remainderIndex[sum] = i;
                }
            }
    
            return false;
        }
    };