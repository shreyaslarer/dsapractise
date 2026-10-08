class Solution {
public:
    vector<int> findAnagrams(string s, string p) {


        //Here lets use the map ok but  
        //Whilw we are using the map let us consider only one map fir the p
        //Lets keep a var of count = p lebgth and whenever we get the p val in s array we will reduce the map freq as well as the count --
        //When count completely reaches 0 we will store the first index of that arr nd return it 

        //Base case here is 
        vector<int> res;//As we need to return the ans in indexes
        if(s.size()<p.size()) return res;
        
        //Lets creare map ans store the p strings with freq
        unordered_map<char, int>mp;
        for(char c : p){
            mp[c]++;
        }

        int left =0, count = p.size();
        for (int right =0; right<s.size(); right++){
            int val = mp[s[right]];

            if(val>0) count--;

            //After reducing the cout value we need to reduce the frq inside the map to 0 right so
            mp[s[right]] = mp[s[right]]-1;

            //Now we need to reduce the  left pointer right when it crosees the p size

            if(right-left+1 > p.size()){
                int leftval = mp[s[left]];
                if(leftval>=0) count++;
                mp[s[left]]=leftval+1;
                left++;
            }

            if(count == 0){
                res.push_back(left);
            }
        }
        return res;
    }
};