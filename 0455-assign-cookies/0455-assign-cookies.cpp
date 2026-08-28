class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& c) {

        int m = c.size();
        int n = g.size();
        sort(g.begin(), g.end());
        sort(c.begin(), c.end());
        int l = 0, r  = 0;
        while(l<m && r<n){
            if (c[l]<g[r]){
                l++;
            }else{
                r++;
                l++;
            }

        }

    return r;

        
    }
};