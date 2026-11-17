class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {

        int largestarea = 0;
        stack<int>st;
        for(int i =0; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                int ele = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                largestarea = max(largestarea,arr[ele]*(nse-pse-1));
            }
            st.push(i);
        }

        while(!st.empty()){
            int nse = arr.size();
            int ele = st.top();
            st.pop();
            int pse = st.empty()?-1 : st.top();
            largestarea = max(largestarea, (nse-pse-1)*arr[ele]);
        }
        return largestarea;
        
        
    }
};