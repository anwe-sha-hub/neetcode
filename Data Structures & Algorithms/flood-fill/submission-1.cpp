class Solution {
public:
void dfs(int row,int col,vector<vector<int>>& image,vector<vector<int>>&ans,int delrow[],int delcol[],int color,int init){
int n=image.size();
int m=image[0].size();
ans[row][col]=color;
for(int i=0;i<4;i++){
    int nr=row+delrow[i];
    int nc=col+delcol[i];
    if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==init && ans[nr][nc]!=color){
        dfs(nr,nc,image,ans,delrow,delcol,color,init);
    }
}
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int init=image[sr][sc];
        vector<vector<int>>ans=image;
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,image,ans,delrow,delcol,color,init);
        return ans;
    }
};