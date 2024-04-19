class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int>:: iterator ip;
        int size=nums.size();
        ip=unique(nums.begin(),nums.begin()+size);
       nums.resize(distance(nums.begin(),ip));
        size=nums.size();
         int number=1;
       for(int i=0;i<size;i++) 
       {
        if(nums[i]>0)
        {
        if(nums[i]!=number)
          return number;
          number++;
       }
       continue;
        }     
       return number;
    }
};