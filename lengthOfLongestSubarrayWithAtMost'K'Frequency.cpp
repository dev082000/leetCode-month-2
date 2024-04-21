class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxLen=0;
        int release=0;
        unordered_map<int,int>freq;
        for(int current=0;current<nums.size();current++)
        {
            freq[nums[current]]++;
            while(release<=current && freq[nums[current]]>k)
            {
                freq[nums[release]]--;
                release++;
            }
             int currentLen=current-release+1;
            maxLen=max(maxLen,currentLen);
        }
        return maxLen;
    }
};