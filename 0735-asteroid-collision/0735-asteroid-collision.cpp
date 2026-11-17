class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        //delete if they both are equal or if it is > 0 
        //push if it < 0 and if it grater than  arr[i]
        vector<int>st;

        for(int i = 0; i<arr.size(); i++){
            if(arr[i]>0){
                st.push_back(arr[i]);
            }else{

                while(!st.empty() && st.back()>0 && st.back()<abs(arr[i])){
                    st.pop_back();
                }
                if(!st.empty() && st.back()>0 && st.back()==abs(arr[i])){
                    st.pop_back();
                }else if(st.empty() || st.back()<0){
                    st.push_back(arr[i]);
                }
            }
        }
        return st;
        
    }
};