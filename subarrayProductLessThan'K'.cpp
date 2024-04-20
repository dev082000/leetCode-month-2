class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0,right=0,answer=0,product=1;
        if(k<=1)
        return 0;
        int size=nums.size();
        while(right<size)
        {
              product*=nums[right];
            while(product>=k)
            {
                product=product/nums[left];
                left++;
            }
                  answer+=right-left+1;
                right++;
            }
            return answer;
        }
    };