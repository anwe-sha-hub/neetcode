class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0,r=0,minind=n-1,maxlen=0;

        for(int i=0;i<k;i++){
            l+=cardPoints[i];
        }
        maxlen=l;
        for(int i=k-1;i>=0;i--){
            l-=cardPoints[i];
            r+=cardPoints[minind];
            minind=minind-1;
            maxlen=max(maxlen,l+r);
        }
        return maxlen;
    }
};