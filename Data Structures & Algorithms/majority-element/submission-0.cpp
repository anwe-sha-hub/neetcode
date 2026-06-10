class Solution {
public:
    int majorityElement(vector<int>& v) {
        int c=0;
        int ele;
        int n=v.size();
        for(int i=0;i<n;i++){
if(c==0){
    c=1;
    ele=v[i];
}
else if(v[i]==ele) c++;
else c--;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==ele) cnt++;
            if(cnt>(n/2)) return ele;
        }
        return -1;
    }
};