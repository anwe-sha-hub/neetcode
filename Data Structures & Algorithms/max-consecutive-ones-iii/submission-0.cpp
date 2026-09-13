class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int l=0,r=0,z=0,maxlen=0,len=0;

    while(r<nums.size()){
        if(nums[r]==0) z++;
        if(z>k){
            if(nums[l]==0) z--;
            l++;
        }
        if(z<=k){
            len=r-l+1;
            maxlen=max(maxlen,len);
        }
        r++;
    }
    return maxlen;
    }
};