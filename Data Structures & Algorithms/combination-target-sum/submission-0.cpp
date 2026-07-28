class Solution {
public:
void combo(int ind,int target,vector<vector<int>>&ans,vector<int>&arr,vector<int>&ds){
    if(ind==arr.size()){
            if(target==0)
        ans.push_back(ds);
        return;
    
    }


    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        combo(ind,target-arr[ind],ans,arr,ds);
        ds.pop_back();
    }
    combo(ind+1,target,ans,arr,ds);
    
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combo(0,target,ans,nums,ds);
        return ans;
    }
};
