class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>store;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int m=target-a;
            if(store.find(m)!=store.end()){
                return {store[m],i};
            }
            store[a]=i;
        }
        return {-1,-1};
    }
};
