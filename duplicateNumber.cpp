class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i=0,size=nums.size();
    while(i<size)
    {
        if(nums[i]!=nums[i+1])
        i++;
        else
        break;
    }
    return nums[i];
    }
};