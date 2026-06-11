class Solution {
public:
vector<int>generateRows(int num){
    vector<int>ansRow;
    ansRow.push_back(1);
long long  ans=1;
    for(int i=1;i<num;i++){
        ans*=(num-i);
        ans/=i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
ans.push_back(generateRows(i));
        }
        return ans;
    }
};