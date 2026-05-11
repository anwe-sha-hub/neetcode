class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int subset=1<<n;
        for(int num=0;num<subset;num++){
            vector<int>l;
            for(int i=0;i<n;i++){
                //set ith bit
                if(num &(1<<i)) l.push_back(nums[i]);
            }
            ans.push_back(l);
        }
        return ans;
    }
};
