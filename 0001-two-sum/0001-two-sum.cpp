class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
        map<int, int>mp;
        for(int i=0;i<s;i++)
        {
            int num=nums[i];
            int required=target-num;
            if(mp.find(required)!=mp.end())
            {
                return {mp[required], i};
            }
            mp[num]=i;
        }
       
        return{-1, -1};
    }
};