class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        //Here simple the optimal soln used the both 2 pointers and  the sliding window
        //First lets all push the elemets into the map with its frequency
        //Then when ever the map crossess the k size we will first reduce the left and if the freq reaches 0 we will remove completly and we will move the right

        int left = 0, right=0, maxlength=0;
        unordered_map<int,int>mp;

        while(right<fruits.size()){
            mp[fruits[right]]++;

            if(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            if(mp.size()<=2){
                maxlength = max(maxlength,right-left+1);
            }
            right++;
        }
        return maxlength;
        
    }
};