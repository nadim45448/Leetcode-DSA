class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int, int>mp;
    mp[0]=1; // setting 0 in the map

    int preSum=0, cnt=0;
    for(int i=0;i<n;i++){
        preSum+=nums[i];
        int remove=preSum-k;
        cnt+=mp[remove];
        mp[preSum]+=1;
    }
    return cnt;
        
    }
};