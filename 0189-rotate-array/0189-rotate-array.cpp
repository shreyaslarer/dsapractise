class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        //Base Case 

if (arr.empty() || arr.size() == 1)
return;
d = d%arr.size();
if (d==0)
return;

//First rotate 
reverse(arr.begin(), arr.end()-d);
reverse(arr.end()-d, arr.end());
reverse(arr.begin(), arr.end());
return;

        
    }
};