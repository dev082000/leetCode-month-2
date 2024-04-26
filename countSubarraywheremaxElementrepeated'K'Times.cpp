class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long n=nums.size();
        int a=0;
        for(auto i: nums)
        {
         a=max(a,i);
        }
        long ans=0;
        unordered_map<int,int>freq;
        long i=0,j=0;
        while(j<n)
        {
            freq[nums[j]]++;
            while(freq[a]>=k)
            {
                    ans=ans+n-j;
                freq[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};