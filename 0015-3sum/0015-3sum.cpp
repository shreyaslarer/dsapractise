class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>>res;

        sort(arr.begin(), arr.end());
for (int i =0; i<arr.size(); i++){

    if (i>0 && arr[i] == arr[i-1]) continue;
    int j =i+1, k = arr.size()-1;
    while (j<k){
        long long sum = arr[i] + arr[j] + arr[k];
        if (sum == 0){
            res.push_back({arr[i], arr[j], arr[k]});

            while(j<k && arr[j]==arr[j+1]) j++;
            while(j<k && arr[k]== arr[k-1]) k--;

            j++;
            k--;
        }else if (sum<0){
            j++;

        }else{
            k--;
        }
    }
}

    return res;

        
    }
};