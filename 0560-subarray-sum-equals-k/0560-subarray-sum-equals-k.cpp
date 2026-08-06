class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        //Apply prefix Sum appoach 
    //Find the prefix sum first 

    int prefixSum = 0;
    unordered_map<int, int>mp;
    mp[0] = 1;

    int cnt = 0; // We wil do ++ when ever we get the subarray
    for (int i = 0; i<arr.size(); i++){
        prefixSum+=arr[i];  // You will get the prefix sum values here 

        //Then push the values directly to the Hashmap //Define forst above  
        //then inetialize the startign value of the map with mp[0]=1; because if we find the subarry = k in the starting index only we need to extact that right doirectly so when we appy that to the formaula taht is ans = ps[r] - ps[l-1]; we need to get value - zero so that we can take taht value out 

        //Do that inetialization in the top

        int required = prefixSum - k; //et the previous sum

        //After getting it them you finally check if it exist inside the map

        if(mp.find(required)!= mp.end()){
            cnt+= mp[required];
        }

        //Store the current prefix sum
        mp[prefixSum]++;

    }

    return cnt;

        
    }
};